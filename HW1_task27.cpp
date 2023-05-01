#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int num;
    int smallest = numeric_limits<int>::max(); 
    int largest = numeric_limits<int>::min(); 

    cout << "Enter your numbers (enter a negative number to stop the program): ";

    while (true) {
        cin >> num;

        if (num < 0) {
            break;
        }

        if (num < smallest) {
            smallest = num;
        }

        if (num > largest) {
            largest = num;
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
