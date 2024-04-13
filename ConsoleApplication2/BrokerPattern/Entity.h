#pragma once
#include <string>

class Broker;

class Entity {
public:
    Entity(Broker& broker);
    virtual void sendMessage(const std::string& message);
    virtual void receiveMessage(const std::string& message) = 0;

protected:
    Broker& broker;
};

// Concrete entities
class ConcreteEntityA : public Entity {
public:
    ConcreteEntityA(Broker& broker);
    void doSomething();
    void receiveMessage(const std::string& message) override;
};

class ConcreteEntityB : public Entity {
public:
    ConcreteEntityB(Broker& broker);
    void doSomething();
    void receiveMessage(const std::string& message) override;
};

