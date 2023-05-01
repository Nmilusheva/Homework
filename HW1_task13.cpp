#include <iostream>

using namespace std;

int main(){
    
    int number1, sum = 0, count = 0;
    
    cout << "Enter a number: ";
    cin >> number1;
    
    while (number1 >= 10)
    {
        sum += number1 % 10;
        number1 = (number1 - (number1 % 10)) / 10;
        ++count;
    }
    sum += number1;
    ++count;
    
    double average;
    average = sum / count;
    cout <<"The sum of the digits is: " << sum << endl;
    cout <<"The count of the digits is: " << count << endl;
    cout <<"The average of the digits is: " << average << endl;

    return 0;
}
