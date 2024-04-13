#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include "view.h"

class LoginController {
private:
    UserDatabase& database;
    LoginView& view;

public:
    LoginController(UserDatabase& db, LoginView& vw);
    void authenticateUser();
};

#endif

