#include <iostream>
using namespace std;

int main() {

    char symbol;
    int size; 

    cout << "Enter a symbol: ";
    cin >> symbol;

    cout << "Enter the size: ";
    cin >> size;
    
    
    
    for (int i = size; i > 0; i--)
    {   
        for (int j = 0; j < i; j++)
        {
             cout << symbol << " ";
        }
        
        cout << endl;
    }
    


    return 0;
}
