#include "Entity.h"
#include "Broker.h"
#include <iostream>

// Entity class implementation
Entity::Entity(Broker& broker) : broker(broker) {
    broker.registerEntity(this);
}

void Entity::sendMessage(const std::string& message) {
    broker.sendMessage(message, this);
}

// ConcreteEntityA implementation
ConcreteEntityA::ConcreteEntityA(Broker& broker) : Entity(broker) {}

void ConcreteEntityA::doSomething() {
    sendMessage("Hello from Entity A");
}

void ConcreteEntityA::receiveMessage(const std::string& message) {
    std::cout << "Entity A received: " << message << std::endl;
}

// ConcreteEntityB implementation
ConcreteEntityB::ConcreteEntityB(Broker& broker) : Entity(broker) {}

void ConcreteEntityB::doSomething() {
    sendMessage("Hello from Entity B");
}

void ConcreteEntityB::receiveMessage(const std::string& message) {
    std::cout << "Entity B received: " << message << std::endl;
}