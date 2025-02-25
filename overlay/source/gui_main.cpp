#include "gui_main.h"
#include "symbols.hpp"

MainGui::MainGui() {
    this->logo_x = 0;
    this->logo_y = 0;
}

tsl::elm::Element *MainGui::createUI()
{
    auto frame = new tsl::elm::OverlayFrame("", "");
    auto dvdDrawer = new tsl::elm::CustomDrawer([this](tsl::gfx::Renderer *renderer, u16 x, u16 y, u16 w, u16 h) {
        symbols::dvd::symbol.draw(symbols::dvd::height, symbols::dvd::width, renderer); 
    });

    frame->setContent(dvdDrawer);
    return frame;
}

void MainGui::update() { }