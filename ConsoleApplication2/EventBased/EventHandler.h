#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class EventHandler
{
public:
    void onEventA(const Event& event);

    void onEventB(const Event& event);

    void onEventC(const Event& event);
};
