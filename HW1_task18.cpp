#include <iostream>
using namespace std;

int main() {

    char symbol;
    int height, widht; 

    cout << "Enter a symbol: ";
    cin >> symbol;
    
    cout << "Enter height: ";
    cin >> height;
    
    cout << "Enter width: ";
    cin >> widht;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < widht; j++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }
    


    return 0;
}