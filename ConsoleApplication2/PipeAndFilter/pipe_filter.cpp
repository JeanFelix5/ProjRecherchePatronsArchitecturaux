#include "pipe_filter.h"
#include <algorithm>
#include <cctype>

// Filtrage : Majuscule
void MajusculeFilter::process(std::string& input) {
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
}

// Filtrage : Inversion
void InversionFilter::process(std::string& input) {
    std::reverse(input.begin(), input.end());
}

// Filtrage : SuppressionEspaces
void SuppressionEspacesFilter::process(std::string& input) {
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
}
