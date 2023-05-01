#include <iostream>
#include <string>
 
using namespace std;

int main(){

string name;
int age;
cout <<"Please, enter your name: ";
cin >> name;
cout <<"Please, enter your age: ";
cin >> age; 
cout <<"Your name is: " << name << endl;
cout <<"Your age is: " << age << endl;

int jubilee = ((age / 10) + 1) * 10;
int yearsToJubilee = jubilee - age; 

cout <<"Your next jubilee is: " << jubilee << endl;
cout <<"Years until next jubilee: " << yearsToJubilee << endl;

return 0;
}