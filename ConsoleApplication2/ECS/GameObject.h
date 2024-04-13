#pragma once
class GameObject {
public:
    GameObject();
    unsigned int getId() const;

private:
    unsigned int id;
    static unsigned int nextId;
};