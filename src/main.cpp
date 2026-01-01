#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Using FLAlertLayer as a fallback if Notifications keep failing
        // This is even more stable on Android
        auto alert = FLAlertLayer::create(
            "Mod Loaded", 
            "Hello from <cl>Geode</c>!", 
            "OK"
        );
        alert->show();

        return true;
    }
};
