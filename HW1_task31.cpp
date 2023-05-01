#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;

   cout << "Enter a number: ";
   cin >> n;
   
   int squareRoot = sqrt(n);

   if (squareRoot * squareRoot == n)
   {
    cout << "The number is a perfect square";
   } else {
    cout << "The number is NOT a perfect square";
   }
   
   
   return 0;
}
