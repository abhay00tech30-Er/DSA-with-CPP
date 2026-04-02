/**
 * @file 05_EvenOdd.cpp
 * @brief Demonstrates conditional logic and optimal bitwise operations in C++.
 * 
 * Concept: Determining parity using both modulo (%) and bitwise AND (&)
 * operations. The bitwise approach is generally considered slightly faster
 * or a classic interview-level optimization.
 */

#include <iostream>
#include <limits>
#include <cstdlib>

// Using modulo operator
bool isEvenModulo(long long number) {
    return (number % 2 == 0);
}

// Using bitwise operator
bool isEvenBitwise(long long number) {
    // A number is odd if its least significant bit is 1.
    return (number & 1) == 0;
}

int main() {
    long long n = 0;
    
    std::cout << "--- Parity Checker ---\n";
    std::cout << "Enter an integer N: ";
    
    if (!(std::cin >> n)) {
        std::cerr << "Fatal Error: Invalid Input. Run the program again and enter an integer.\n";
        return EXIT_FAILURE;
    }

    std::cout << "\nResults for " << n << ":\n";
    
    // Result via Modulo 
    if (isEvenModulo(n)) {
        std::cout << "[Modulo Method] -> " << n << " is EVEN.\n";
    } else {
        std::cout << "[Modulo Method] -> " << n << " is ODD.\n";
    }

    // Result via Bitwise
    if (isEvenBitwise(n)) {
        std::cout << "[Bitwise Method] -> " << n << " is EVEN.\n";
    } else {
        std::cout << "[Bitwise Method] -> " << n << " is ODD.\n";
    }

    return EXIT_SUCCESS;
}
