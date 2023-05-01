#include <iostream>
using namespace std;

int main() {
    
    char operation;
    double number = 0.0;
    double number1 = 0.0;
    double result = 0.0;    
        cout << "Enter a number: ";
        cin >> number;
        cout << "Enter an operator: ";
        cin >> operation;
        cout << "Enter another number: ";
        cin >> number1;
        
        if ((operation == '+') || (operation == '-') || (operation == '*') || (operation == '/')) {
            if (number >= number1) {
                if (operation == '+') {
                    result = number + number1;
                } else if (operation == '-') {
                    result = number - number1;
                } else if (operation == '*') {
                    result = number * number1;
                } else if (operation == '/') {
                    if (number1 != 0.0) {
                        result = number / number1;
                    } else {
                        cout << "Error: you can't divide by 0!";
                        
                    }
                }
            } else {
                cout << "Invalid number";
               
            }
        } else {
            cout << "Invalid operator";
           
        }
        
        cout << result << endl;
        cout << "The program has ended";
        return 0;
    }
    
    


