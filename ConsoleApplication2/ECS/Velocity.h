#pragma once

#include "Components.h"

class Velocity : public Component {
public:
    Velocity(float dx = 0.0f, float dy = 0.0f);
    float dx, dy;
};
