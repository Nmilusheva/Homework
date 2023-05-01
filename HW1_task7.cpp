#include <iostream>
int main() {
  
  int number1;
   std::cout << "Enter a number: ";
   std::cin >> number1;
     if (number1 % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }
 
 return 0;
}