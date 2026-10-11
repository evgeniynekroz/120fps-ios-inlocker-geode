#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        CCDirector::sharedDirector()->setAnimationInterval(1.0 / 120.0);
        return true;
    }
};

$execute {
    CCDirector::sharedDirector()->setAnimationInterval(1.0 / 120.0);
}
