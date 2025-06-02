#include <iostream>
using namespace std;

int main() {
    double x, result = 1;
    int y;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (y): ";
    cin >> y;

    int absY = (y < 0) ? -y : y;
    for (int i = 0; i < absY; ++i) {
        result *= x;
    }

    if (y < 0)
        result = 1.0 / result;

    cout << x << " raised to the power " << y << " is " << result << endl;
    return 0;
}