#ifndef PIPE_FILTER_H
#define PIPE_FILTER_H

#include <string>

// Interface pour les filtres
class Filter {
public:
    virtual void process(std::string& input) = 0;
};

// Filtrage : Majuscule
class MajusculeFilter : public Filter {
public:
    void process(std::string& input) override;
};

// Filtrage : Inversion
class InversionFilter : public Filter {
public:
    void process(std::string& input) override;
};

// Filtrage : Suppression des espaces
class SuppressionEspacesFilter : public Filter {
public:
    void process(std::string& input) override;
};

#endif // PIPE_FILTER_H
