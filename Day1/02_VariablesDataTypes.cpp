/**
 * @file 02_VariablesDataTypes.cpp
 * @brief Demonstrates the use of modern C++ static typing and variables.
 * 
 * Concept: C++ is statically typed. Using fixed-width integer types from <cstdint> 
 * is preferred for cross-platform robustness. Using constexpr for immutability 
 * and auto where type deduction is unambiguous is best practice.
 */

#include <iostream>
#include <string>
#include <cstdint> // For fixed-width integers like int32_t, int64_t
#include <iomanip> // For string formatting
#include <cstdlib>

int main() {
    // Fixed-width integer types for guaranteed sizes across platforms
    int32_t age = 21;
    int64_t largeId = 9876543210LL;

    // constexpr for values determined at compile time
    constexpr float weight = 70.5f;
    constexpr double preciseValue = 99.987654;

    // Character and Boolean types
    char section = 'B';
    bool isEligible = true;

    // std::string for textual data
    std::string name = "Professional Developer";

    // Display formatted output
    std::cout << "================ User Profile ================\n"
              << std::left << std::setw(15) << "User Name:" << name << "\n"
              << std::left << std::setw(15) << "Age:" << age << "\n"
              << std::left << std::setw(15) << "Weight:" << weight << " kg\n"
              << std::left << std::setw(15) << "Section:" << section << "\n"
              << std::left << std::setw(15) << "Eligible:" << std::boolalpha << isEligible << "\n"
              << std::left << std::setw(15) << "System ID:" << largeId << "\n"
              << "==============================================\n";

    return EXIT_SUCCESS;
}
