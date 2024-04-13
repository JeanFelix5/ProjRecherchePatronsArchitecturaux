#include "model.h"

UserModel::UserModel(const std::string& uname, const std::string& pwd)
    : username(uname), password(pwd) {}

std::string UserModel::getUsername() const {
    return username;
}

std::string UserModel::getPassword() const {
    return password;
}

void UserDatabase::addUser(const UserModel& user) {
    users.push_back(user);
}

bool UserDatabase::authenticate(const std::string& username, const std::string& password) {
    for (const auto& user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            return true;
        }
    }
    return false;
}
