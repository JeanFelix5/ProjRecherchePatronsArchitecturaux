#pragma once
#include <string>
using namespace std;

class Event {
public:
    Event(const string& eventType);
    
   string getType() const { return EventType; }
    
private:
    string EventType;
};
