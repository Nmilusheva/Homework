#include <iostream>
using namespace std;

int main() {

    char symbol, symbol1;
    int size; 

    cout << "Enter a symbol: ";
    cin >> symbol;

    cout << "Enter another symbol: ";
    cin >> symbol1;

    cout << "Enter the size: ";
    cin >> size;
    
    
    
    for (int i = size; i > 0; i--)
    {   
        for (int j = 0; j < i; j++)
        {
             cout << symbol;
        }
        
        cout << endl;
    } 
    for (int i = 1; i <= size; i++)
    {   for (int j = 0; j < i; j++)
    {
        cout << symbol1;
    }
       cout << endl;
    
        
    }
    
    
//не съм решила задачата правилно

    return 0;
}