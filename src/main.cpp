#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Use a simpler notification method to avoid the 'fmt' bug
        auto notification = Notification::create("Mod Loaded!", NotificationIcon::Success);
        notification->show();

        return true;
    }
};
