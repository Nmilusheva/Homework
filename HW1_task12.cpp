#include <iostream>
int main() {
  
int number1;
std::cout << "Enter a number: ";
std::cin >> number1;
int sumOfDigits;
while (number1 > 0) {
            int digit = number1 % 10;
            sumOfDigits += digit;
            number1 /= 10;
        } std::cout << "The sum of the digits is: " << sumOfDigits << std::endl;
 return 0;
}