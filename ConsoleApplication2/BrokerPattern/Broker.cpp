#include "Broker.h"
#include "Entity.h"

// Broker class implementation
void Broker::registerEntity(Entity* entity) {
    entities.push_back(entity);
}

void Broker::sendMessage(const std::string& message, Entity* sender) {
    for (Entity* entity : entities) {
        if (entity != sender) {
            entity->receiveMessage(message);
        }
    }
}