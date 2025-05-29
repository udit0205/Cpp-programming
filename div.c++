#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        result = num1 / num2;
        cout << "Result: " << result << endl;
    }

    return 0;
}