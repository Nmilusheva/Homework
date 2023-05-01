#include <iostream>
using namespace std;

int main() {

int a, b;
int sum;

cout << "Enter the starting number: ";
cin >> a;

cout << "Enter the ending number: ";
cin >> b;

for (int i = a; i <= b; i++)
{
    sum += i;
}
    cout << "The sum of the numbers from [" << a << "-" << b << ") is: " << sum << endl;


    return 0;
}