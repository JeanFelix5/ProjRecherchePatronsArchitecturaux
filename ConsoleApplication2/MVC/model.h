#ifndef MODEL_H
#define MODEL_H

#include <string>
#include <vector>

class UserModel {
private:
    std::string username;
    std::string password;

public:
    UserModel(const std::string& uname, const std::string& pwd);
    std::string getUsername() const;
    std::string getPassword() const;
};

class UserDatabase {
private:
    std::vector<UserModel> users;

public:
    void addUser(const UserModel& user);
    bool authenticate(const std::string& username, const std::string& password);
};

#endif
