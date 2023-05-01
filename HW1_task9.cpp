#include <iostream>
int main() {
  
  int number1;
   std::cout << "Enter a number: ";
   std::cin >> number1;
  double lastDigit = number1 % 10;
std::cout << "The last digit of the number is: " << lastDigit << std::endl;
 
 return 0;
}
