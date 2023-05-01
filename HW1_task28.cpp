#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    int smallest = numeric_limits<int>::max();
    int secondSmallest = numeric_limits<int>::max();
    int largest = numeric_limits<int>::min();
    int secondLargest = numeric_limits<int>::min();

    cout << "Enter your numbers (enter a negative number to stop the program): ";

    while (true) {
        cin >> number;

        if (number < 0) {
            break;
        }

        if (number < smallest) {
            secondSmallest = smallest;
            smallest = number;
        } else if (number < secondSmallest && number != smallest) {
            secondSmallest = number;
        }

        if (number > largest) {
            secondLargest = largest;
            largest = number;
        } else if (number > secondLargest && number != largest) {
            secondLargest = number;
        }
    }

    
        cout << "Second smallest: " << secondSmallest << endl;
        cout << "Second largest: " << secondLargest << endl;
    

    return 0;
}