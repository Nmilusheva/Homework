#include <iostream>
int main() {
    double a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    double average = (a + b) / 2;
    std::cout << "The average is: " << average << std::endl;
    return 0;

}