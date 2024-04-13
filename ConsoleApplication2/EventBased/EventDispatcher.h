#pragma once
#include <functional>
#include <map>
#include "Event.h"
using namespace std;

class EventDispatcher {
public:
    void subscribe(const std::string& eventType, const std::function<void(const Event&)>& handler);

    void publish(const Event& event);

private:
    std::map<std::string, std::function<void(const Event&)>> handlers;
};
