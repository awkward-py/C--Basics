#include <iostream>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = square(num);

    std::cout << "The square of " << num << " is: " << result << std::endl;

    return 0;
}
