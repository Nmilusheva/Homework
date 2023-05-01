#include <iostream>
using namespace std;

int main() {
   
    for (int x = 1; x <= 9; x++) {
        cout << "Table for " << x << ":" << endl;

        for (int y = 1; y <= 10; y++) {
            int result = x * y;
            cout << x << " * " << y << " = " << result << endl;
        }

        cout << endl;
    }

    return 0;
}