#define TESLA_INIT_IMPL
#include <tesla.hpp>
#include <switch.h>
#include <string>
#include "gui_main.h"

class DvdOverlay: public tsl::Overlay {
    public:
        DvdOverlay() { }
        ~DvdOverlay() { }

        void initServices() override {
            smInitialize();

            tsl::hlp::ScopeGuard smGuard([]() {
                smExit();
                return;
            });
        }

        void exitServices() override {
            smExit();
        }

        std::unique_ptr<tsl::Gui> loadInitialGui() override {
            return initially<MainGui>();
        }
};

int main(int argc, char **argv) {
    return tsl::loop<DvdOverlay>(argc, argv);
}