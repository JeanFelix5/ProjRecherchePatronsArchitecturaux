#include "GameObject.h"

GameObject::GameObject() : id(nextId++)
{
    
}

unsigned int GameObject::getId() const {
    return id;
}

unsigned int GameObject::nextId = 0;