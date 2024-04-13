#include "EventDispatcher.h"
#include <iostream>

void EventDispatcher::subscribe(const std::string& eventType, const std::function<void(const Event&)>& handler)
{
    handlers[eventType] = handler;
}

void EventDispatcher::publish(const Event& event)
{
    auto it = handlers.find(event.getType());
    if (it != handlers.end()) {
        it->second(event);
    } else {
        cout << "No handler for event type: " << event.getType() << '\n';
    }
}
