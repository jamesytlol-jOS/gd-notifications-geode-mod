#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // We use a simple console log first. 
        // If this builds, we know the "fmt" error is gone.
        log::info("MenuLayer initialized successfully!");

        return true;
    }
};
