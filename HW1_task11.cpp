#include <iostream>
int main() {
  
int number1;
std::cout << "Enter a number: ";
std::cin >> number1;
   while (number1 > 0) {
            int digit = number1 % 10;
            std::cout << digit << std::endl;
            number1 /= 10;
        }
 return 0;
}