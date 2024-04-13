#include "view.h"
#include <iostream>

std::pair<std::string, std::string> LoginView::promptCredentials() const {
    std::string username, password;
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;
    return std::make_pair(username, password);
}

void LoginView::showAuthenticationResult(bool isAuthenticated) const {
    if (isAuthenticated) {
        std::cout << "Authentication successful." << std::endl;
    } else {
        std::cout << "Authentication failed. Invalid username or password." << std::endl;
    }
}
