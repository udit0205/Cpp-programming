#include <iostream>
#define PI 3.14159

int main() {
    double radius, area;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    area = PI * radius * radius;
    std::cout << "Area of the circle: " << area << std::endl;
    return 0;
}