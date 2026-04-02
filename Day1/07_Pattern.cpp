/**
 * @file 07_Pattern.cpp
 * @brief Demonstrates nested loops to control console output layout and shapes.
 * 
 * Concept: Using an object-oriented or structured approach to build a
 * scalable pattern printer. Standard stream manipulators and iteration constructs
 * allow mapping abstract math onto terminal output structures.
 */

#include <iostream>
#include <string>
#include <cstdlib>

// Function that abstracts pattern printing functionality
void printRightTriangle(int numRows, char symbol) {
    if (numRows <= 0) {
        std::cerr << "[Warning]: Number of rows should be greater than zero.\n";
        return;
    }

    for (int i = 1; i <= numRows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << symbol << " ";
        }
        std::cout << "\n"; // End of row
    }
}

int main() {
    std::cout << "--- Scalable Pattern Renderer ---\n";
    
    int rows = 0;
    std::cout << "Enter the Number of Rows (e.g., 4): ";

    if (!(std::cin >> rows)) {
        std::cerr << "Fatal Error: Requires an integer value.\n";
        return EXIT_FAILURE;
    }

    std::cout << "\nRendering Custom Pattern (" << rows << " rows):\n";
    printRightTriangle(rows, '*');
    
    return EXIT_SUCCESS;
}
