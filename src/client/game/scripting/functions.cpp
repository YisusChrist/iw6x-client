#include <std_include.hpp>
#include "functions.hpp"

#include <utils/string.hpp>

#include <xsk/gsc/types.hpp>
#include <xsk/resolver.hpp>

namespace scripting
{
	namespace
	{
		std::unordered_map<std::string, unsigned> lowercase_map(
			const std::unordered_map<std::string, unsigned>& old_map)
		{
			std::unordered_map<std::string, unsigned> new_map{};
			for (auto& entry : old_map)
			{
				new_map[utils::string::to_lower(entry.first)] = entry.second;
			}

			return new_map;
		}

		const std::unordered_map<std::string, unsigned>& get_methods()
		{
			static auto methods = lowercase_map(method_map);
			return methods;
		}

		const std::unordered_map<std::string, unsigned>& get_functions()
		{
			static auto function = lowercase_map(function_map);
			return function;
		}

		int find_function_index(const std::string& name, const bool prefer_global)
		{
			const auto target = utils::string::to_lower(name);

			const auto& primary_map = prefer_global
				                          ? get_functions()
				                          : get_methods();
			const auto& secondary_map = !prefer_global
				                            ? get_functions()
				                            : get_methods();

			auto function_entry = primary_map.find(target);
			if (function_entry != primary_map.end())
			{
				return function_entry->second;
			}

			function_entry = secondary_map.find(target);
			if (function_entry != secondary_map.end())
			{
				return function_entry->second;
			}

			return -1;
		}

		script_function get_function_by_index(const unsigned index)
		{
			static const auto function_table = SELECT_VALUE(0x144E1E6F0, 0x1446B77A0);
			static const auto method_table = SELECT_VALUE(0x144E1F9E0, 0x1446B8A90);

			if (index < 0x25D)
			{
				return reinterpret_cast<script_function*>(function_table)[index];
			}

			return reinterpret_cast<script_function*>(method_table)[index - 0x8000];
		}

		unsigned int parse_token_id(const std::string& name)
		{
			if (name.starts_with("_ID"))
			{
				return static_cast<unsigned int>(std::strtol(name.substr(3).data(), nullptr, 10));
			}

			return 0;
		}
	}

	std::vector<std::string> find_token(unsigned int id)
	{
		std::vector<std::string> results;

		results.push_back(utils::string::va("_ID%i", id));
		results.push_back(utils::string::va("_id_%04X", id));
		results.push_back(xsk::gsc::iw6::resolver::token_name(static_cast<std::uint16_t>(id)));

		return results;
	}

	std::string find_token_single(unsigned int id)
	{
		return xsk::gsc::iw6::resolver::token_name(static_cast<std::uint16_t>(id));
	}

	unsigned int find_token_id(const std::string& name)
	{
		const auto id = xsk::gsc::iw6::resolver::token_id(name);
		if (id)
		{
			return id;
		}

		const auto parsed_id = parse_token_id(name);
		if (parsed_id)
		{
			return parsed_id;
		}

		return game::SL_GetCanonicalString(name.data());
	}

	script_function find_function(const std::string& name, const bool prefer_global)
	{
		const auto index = find_function_index(name, prefer_global);
		if (index < 0) return nullptr;

		return get_function_by_index(index);
	}
}
