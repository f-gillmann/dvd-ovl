#pragma once

#include <tesla.hpp>
#include <switch.h>

class MainGui final : public tsl::Gui {
	public:
		MainGui();
  		~MainGui();

  		tsl::elm::Element *createUI() override;
		void update() override;
};