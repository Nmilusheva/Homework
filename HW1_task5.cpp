#include <iostream>
int main() {

int a, b, c;
std::cout << "Enter the first number: ";
std::cin >> a; 
std::cout << "Enter the second number: ";
std::cin >> b;
std::cout << "Enter the third number: ";
std::cin >> c;
if (a < b && a < c)
{
    std::cout << "The smallest number is: " << a << std::endl;
} else if (b < a && b < c) {
    std::cout << "The smallest number is: " << b << std::endl;
} else {
    std::cout << "The smallest number is: " << c << std::endl;
}
    return 0;
}