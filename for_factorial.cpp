#include <iostream>

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    unsigned long long factorial = 1;

    // Use a for loop to multiply from 1 up to n
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " = " << factorial << std::endl;

    return 0;
}
