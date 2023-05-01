#include <iostream>
int main() {
  
int number1;
   std::cout << "Enter a number: ";
   std::cin >> number1;
int digitCount;
while (number1 != 0) {
    number1 /= 10;
    digitCount++;
} std::cout << "The count of the digits is: " << digitCount << std::endl;
 return 0;
}