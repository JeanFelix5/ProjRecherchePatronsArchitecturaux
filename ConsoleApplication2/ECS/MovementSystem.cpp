#include "MovementSystem.h"
#include <iostream>

void MovementSystem::update(GameObject& gameObject, Position& position, const Velocity& velocity) {
    position.x += velocity.dx;
    position.y += velocity.dy;
    std::cout << "Updated position of GameObject " << gameObject.getId() << " to (" << position.x << ", " << position.y << ")" << std::endl;
}