#include <iostream>
using namespace std;

int main() {

    char symbol, symbol1;
    int height, widht; 

    cout << "Enter a symbol: ";
    cin >> symbol;

    cout << "Enter another symbol: ";
    cin >> symbol1;
    
    cout << "Enter height: ";
    cin >> height;
    
    cout << "Enter width: ";
    cin >> widht;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < widht; j++)
        {
            if ((i + j) % 2 == 0) {
                cout << symbol << " ";
            } else {
                cout << symbol1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}