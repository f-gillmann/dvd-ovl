#pragma once

#include <tesla.hpp>
#include <switch.h>

class MainGui final : public tsl::Gui {
	public:
		MainGui();

  		tsl::elm::Element *createUI() override;
		void update() override;

	private:
		s32 logo_x;
		s32 logo_y;
};
