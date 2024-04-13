#pragma once
#include <vector>
#include <string>

class Entity;


class Broker {
public:
    void registerEntity(Entity* entity);
    void sendMessage(const std::string& message, Entity* sender);

private:
    std::vector<Entity*> entities;
};