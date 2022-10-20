#include <std_include.hpp>
#include "loader/component_loader.hpp"
#include "game/game.hpp"
#include "game/dvars.hpp"

#include "dvars.hpp"

#include <utils/hook.hpp>
#include <utils/flags.hpp>

namespace ranked
{
	class component final : public component_interface
	{
	public:
		void post_unpack() override
		{
			if (game::environment::is_sp())
			{
				return;
			}

			if (game::environment::is_mp())
			{
				// This must be registered as 'true' to avoid crash when starting a private match 
				dvars::override::Dvar_RegisterBool("xblive_privatematch", true, game::DVAR_FLAG_REPLICATED);
			}

			if (game::environment::is_dedi() && !utils::flags::has_flag("unranked"))
			{
				dvars::override::Dvar_RegisterBool("xblive_privatematch", false, game::DVAR_FLAG_WRITE);

				// Some dvar used in gsc
				game::Dvar_RegisterBool("force_ranking", true, game::DVAR_FLAG_WRITE, "Force ranking");

				// Fix sessionteam always returning none (SV_HasAssignedTeam_Internal)
				utils::hook::set(0x140479CF0, 0xC300B0);
			}

			// Always run bots, even if xblive_privatematch is 0
			utils::hook::set<std::uint32_t>(0x140217020, 0xC0FFC031); // BG_BotSystemEnabled
			utils::hook::set<std::uint8_t>(0x140217020 + 4, 0xC3);

			utils::hook::set<std::uint32_t>(0x140216DC0, 0xC0FFC031); // BG_AISystemEnabled
			utils::hook::set<std::uint8_t>(0x140216DC0 + 4, 0xC3);

			utils::hook::set<std::uint32_t>(0x140216F70, 0xC0FFC031); // BG_BotFastFileEnabled
			utils::hook::set<std::uint8_t>(0x140216F70 + 4, 0xC3);

			utils::hook::set<std::uint32_t>(0x1402170E0, 0xC0FFC031); // BG_BotsUsingTeamDifficulty
			utils::hook::set<std::uint8_t>(0x1402170E0 + 4, 0xC3);
		}
	};
}

REGISTER_COMPONENT(ranked::component)