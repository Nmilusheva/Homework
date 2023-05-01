#include <iostream>
using namespace std;

int main() {
    int number;     
    int count = 0;  
    int sum = 0;    

    cout << "Enter a series of numbers (enter a non-numeric value to stop): ";

    
    while (cin >> number) {
        sum += number;
        count++;
    }

  
    if (count == 0) {
        cout << "No numbers entered." << endl;
    } else {
        
        double average = static_cast<double>(sum) / count;
        cout << "Average: " << average << endl;
    }

    return 0;
}