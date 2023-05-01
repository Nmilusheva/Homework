#include <iostream>
int main() {
  
  int number1;
   std::cout << "Enter a number: ";
   std::cin >> number1;
       if (number1 % 10 == 0) {
        std::cout << "The last digit of the number is 0." << std::endl;
    } else {
        std::cout << "The last digit of the number is not 0." << std::endl;
    }
 
 return 0;
}