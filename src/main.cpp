#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        if (auto director = CCDirector::sharedDirector()) {
            director->setAnimationInterval(1.0 / 120.0);
        }
        return true;
    }
};

$execute {
    if (auto director = CCDirector::sharedDirector()) {
        director->setAnimationInterval(1.0 / 120.0);
    }
}
