#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number; 
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        int result = number * i;
        cout << number << " * " << i << " = " << result << endl;
    }



    return 0;
}