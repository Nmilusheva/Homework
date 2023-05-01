#include <iostream>
int main() {
  
  int number1;
   std::cout << "Enter a number: ";
   std::cin >> number1;
    number1 = abs(number1);
    std::cout << "The absolute value of number1 is: " << number1 << std::endl;
 
 return 0;
}