#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// We are telling Geode to "modify" the MenuLayer (Main Menu)
class $modify(MenuLayer) {
    bool init() {
        // Run the original game's MenuLayer::init() first
        // If the game fails to load the menu, we stop here
        if (!MenuLayer::init()) {
            return false;
        }

        // Create and show a Geode notification
        // Arguments: "Text", Icon Type
        Notification::create(
            "Hello from my first mod!", 
            NotificationIcon::Success
        )->show();

        return true;
    }
};
