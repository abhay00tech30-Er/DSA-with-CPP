/**
 * @file 04_AverageCalculator.cpp
 * @brief Demonstrates dynamically sized arrays (std::vector) and generic algorithms
 *        to calculate the average of an arbitrary number of inputs.
 * 
 * Concept: Calculating the sum of multiple inputs optimally. We use `std::accumulate`
 * from `<numeric>` and dynamically allocate space using `std::vector` from `<vector>`.
 */

#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
#include <limits>
#include <cstdlib>

int main() {
    std::cout << "=== Dynamic Average Calculator ===\n";
    std::cout << "How many subjects would you like to enter? ";
    
    size_t count = 0;
    if (!(std::cin >> count) || count == 0) {
        std::cerr << "[Error]: Valid non-zero count of subjects is required. Exiting.\n";
        return EXIT_FAILURE;
    }

    std::vector<double> marks(count);
    
    for (size_t i = 0; i < count; ++i) {
        std::cout << "Enter score for subject " << (i + 1) << ": ";
        while (!(std::cin >> marks[i]) || marks[i] < 0.0 || marks[i] > 100.0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid score. Must be between 0.0 and 100.0. Try again: ";
        }
    }

    // std::accumulate efficiently calculates the sum of elements in the given range.
    double totalSum = std::accumulate(marks.begin(), marks.end(), 0.0);
    double average = totalSum / static_cast<double>(count);

    std::cout << "----------------------------------\n";
    std::cout << "Computed Average Score: " << average << "%\n";
    std::cout << "----------------------------------\n";

    return EXIT_SUCCESS;
}
