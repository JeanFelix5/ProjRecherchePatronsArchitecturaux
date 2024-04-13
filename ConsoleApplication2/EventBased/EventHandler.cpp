#include "EventHandler.h"

void EventHandler::onEventA(const Event& event)
{
    // Handle Event A
    cout << "Event A called " << '\n';
}

void EventHandler::onEventB(const Event& event)
{
    // Handle Event B
    cout << "Event B called " << '\n';
}

void EventHandler::onEventC(const Event& event)
{
    // Handle Event C
    cout << "Event C called " << '\n';
}
