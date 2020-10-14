#include <std_include.hpp>
#include "loader/module_loader.hpp"
#include "utils/nt.hpp"

namespace resources
{
	namespace
	{
		HICON icon;
		HANDLE splash, logo;

		HANDLE WINAPI load_image_a(const HINSTANCE handle, LPCSTR name, const UINT type, const int cx, const int cy,
		                           const UINT load)
		{
			const utils::nt::module self;
			if (!IS_INTRESOURCE(name) && name == "logo.bmp"s) return logo;
			if (self.get_handle() == handle && name == LPCSTR(0x64)) return splash;

			return LoadImageA(handle, name, type, cx, cy, load);
		}

		HICON WINAPI load_icon_a(const HINSTANCE handle, const LPCSTR name)
		{
			const utils::nt::module self;
			if (self.get_handle() == handle && name == LPCSTR(2)) return icon;

			return LoadIconA(handle, name);
		}
	}

	class module final : public module_interface
	{
	public:
		~module() override
		{
			if (icon) DestroyIcon(icon);
			if (logo) DeleteObject(logo);
			if (splash) DeleteObject(splash);
		}

		void post_start() override
		{
			const utils::nt::module self;

			icon = LoadIconA(self.get_handle(), MAKEINTRESOURCEA(ID_ICON));
			logo = LoadImageA(self.get_handle(), MAKEINTRESOURCEA(IMAGE_LOGO), 0, 0, 0, LR_COPYFROMRESOURCE);
			splash = LoadImageA(self.get_handle(), MAKEINTRESOURCEA(IMAGE_SPLASH), 0, 0, 0, LR_COPYFROMRESOURCE);
		}

		void* load_import(const std::string& module, const std::string& function) override
		{
			if (module == "USER32.dll")
			{
				if (function == "LoadIconA")
				{
					return load_icon_a;
				}

				if (function == "LoadImageA")
				{
					return load_image_a;
				}
			}

			return nullptr;
		}
	};
}

REGISTER_MODULE(resources::module)
