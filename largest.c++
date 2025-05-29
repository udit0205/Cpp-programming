#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is larger." << endl;
    else if (b > a)
        cout << b << " is larger." << endl;
    else
        cout << "Both numbers are equal." << endl;

    return 0;
}