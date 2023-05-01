#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int a, b;
   
   cout << "Enter a positive integer: ";
   cin >> a;

   cout << "Enter an exponent: ";
   cin >> b;

   int result = pow(a, b);

   cout << "The result is: " << result << endl;

    return 0;
}
