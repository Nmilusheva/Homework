#include <iostream>
int main() {
double r;
 
 std::cout << "Enter a radius: ";
 std::cin >> r;
 double area = 3.14 * (r * r);
 std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}