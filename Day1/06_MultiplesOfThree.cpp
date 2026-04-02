/**
 * @file 06_MultiplesOfThree.cpp
 * @brief Demonstrates loops with dynamic ranges and generic algorithms in C++.
 * 
 * Concept: Iterating through an arbitrary range [start, end] and identifying 
 * multiples of a specific target dynamically.
 */

#include <iostream>
#include <vector>
#include <cstdlib>

// A modular function returning a vector of multiples
std::vector<int> getMultiples(int start, int end, int targetMultiple) {
    std::vector<int> multiples;
    if (targetMultiple == 0) return multiples; // Protect against div-by-zero
    
    // Adjust start bounds for standard iterative looping, whether ascending or descending.
    int step = (start <= end) ? 1 : -1;
    
    // Note: To cleanly capture the 'end' bound, we safely iterate up to including 'end'.
    // We break iteration conditions cautiously to avoid integer overflow issues
    // at max limits, but we assume typical portfolio usage limits here.
    bool running = true;
    int i = start;
    while (running) {
        if (i % targetMultiple == 0) {
            multiples.push_back(i);
        }
        
        if (i == end) {
            running = false; // Graceful termination
        } else {
            i += step;
        }
    }
    
    return multiples;
}

int main() {
    std::cout << "--- Advanced Range Iterator ---\n";
    
    constexpr int startRange = 10;
    constexpr int endRange = 50;
    constexpr int target = 3;

    std::cout << "Extracting Multiples of " << target 
              << " from " << startRange << " to " << endRange << ":\n[ ";

    std::vector<int> results = getMultiples(startRange, endRange, target);
    
    for(size_t i = 0; i < results.size(); ++i) {
        std::cout << results[i] << (i < results.size() - 1 ? ", " : " ");
    }
    std::cout << "]\n";

    return EXIT_SUCCESS;
}
