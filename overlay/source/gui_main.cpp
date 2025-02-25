#include "gui_main.h"

MainGui::MainGui() { }

MainGui::~MainGui() { }

tsl::elm::Element *MainGui::createUI()
{
    auto frame = new tsl::elm::OverlayFrame("dvd-ovl", DVDOVL_VERSIONSTR);
    auto dvdDrawer = new tsl::elm::CustomDrawer([this](tsl::gfx::Renderer *drawer, u16 x, u16 y, u16 w, u16 h) {
        
    });

    frame->setContent(dvdDrawer);
    return frame;
}

void MainGui::update() { }