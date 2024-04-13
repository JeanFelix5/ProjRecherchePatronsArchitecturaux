#ifndef VIEW_H
#define VIEW_H

#include <string>

class LoginView {
public:
    std::pair<std::string, std::string> promptCredentials() const;
    void showAuthenticationResult(bool isAuthenticated) const;
};

#endif

