#pragma once
#include "EventDispatcher.h"
#include "EventHandler.h"

using namespace std;

class EventDriven
{
public:
    EventDriven();

    // Method to demonstrate event-driven functionality
    void CreateEventSubscription();

private:
    // EventDispatcher and EventHandler instances
    EventDispatcher dispatcher;
    EventHandler eventHandler;
};
