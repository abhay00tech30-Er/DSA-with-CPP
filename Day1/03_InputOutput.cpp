/**
 * @file 03_InputOutput.cpp
 * @brief Demonstrates robust Input/Output handling in modern C++.
 * 
 * Concept: Use `std::cout` (console out) with the insertion operator `<<` and 
 * `std::cin` (console in) with the extraction operator `>>`. A professional implementation
 * must also handle scenarios where the user enters invalid input to prevent infinite loops.
 */

#include <iostream>
#include <limits> // For std::numeric_limits
#include <cstdlib>

int main() {
    int userValue = 0;
    
    // Output: Ask user for an integer
    std::cout << "Enter a positive integer: ";
    
    // Input & Validation
    while (!(std::cin >> userValue) || userValue <= 0) {
        // Clear the fail state of the input stream
        std::cin.clear();
        
        // Ignore the rest of the current line to discard invalid input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "Invalid input. Please enter a valid positive integer: ";
    }
    
    std::cout << "Transaction Successful! You securely entered: " << userValue << "\n";
    
    return EXIT_SUCCESS;
}
