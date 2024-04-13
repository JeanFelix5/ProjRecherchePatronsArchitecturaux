#include "EventDriven.h"
#include "Event.h"
#include "EventDispatcher.h"


EventDriven::EventDriven()
{
   // Subscribe event handler methods to specific event types
   dispatcher.subscribe("EventA", std::bind(&EventHandler::onEventA, &eventHandler, std::placeholders::_1));
   dispatcher.subscribe("EventB", std::bind(&EventHandler::onEventB, &eventHandler, std::placeholders::_1));
   dispatcher.subscribe("EventC", std::bind(&EventHandler::onEventC, &eventHandler, std::placeholders::_1));
}

void EventDriven::CreateEventSubscription()
{
   cout << "Patron event driven " << '\n';
   
   // Now, you can publish events and they will be handled accordingly
   const Event eventA("EventA");
   const Event eventB("EventB");
   const Event eventC("EventC");

   // Used to call the associated events
   dispatcher.publish(eventA);
   dispatcher.publish(eventB);
   dispatcher.publish(eventC);
}
