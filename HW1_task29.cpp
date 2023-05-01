#include <iostream>
using namespace std;

int main() {
   int a, b;

   cout << "Enter value for the variable: ";
   cin >> a;

   cout << "Enter value for the other variable: ";
   cin >> b;

   int switchedValue = a;
   a = b;
   b = switchedValue;

   cout << "Swtiched values: a =  " << a << ", b = " << b << endl;

    return 0;
}
