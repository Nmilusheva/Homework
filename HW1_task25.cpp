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
{   if (i % 2 == 0)
{
    sum += i;
}

    
}
    cout << "The sum of the even numbers from [" << a << "-" << b << ") is: " << sum << endl;


    return 0;
}