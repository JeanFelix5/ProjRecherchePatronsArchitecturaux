#pragma once
#include "GameObject.h"
#include "Position.h"
#include "Velocity.h"

class MovementSystem {
public:
    void update(GameObject& gameObject, Position& position, const Velocity& velocity);
};