#pragma once
#include "Components.h"

class Position : public Component {
public:
    Position(float x = 0.0f, float y = 0.0f);
    float x, y;
};
