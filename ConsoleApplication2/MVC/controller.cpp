#include "controller.h"

LoginController::LoginController(UserDatabase& db, LoginView& vw)
    : database(db), view(vw) {}

void LoginController::authenticateUser() {
    auto credentials = view.promptCredentials();
    bool isAuthenticated = database.authenticate(credentials.first, credentials.second);
    view.showAuthenticationResult(isAuthenticated);
}
