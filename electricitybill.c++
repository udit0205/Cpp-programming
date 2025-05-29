#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    } else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    } else {
        bill = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 6.0;
    }

    // Adding fixed meter charge
    bill += 50;

    cout << "Total electricity bill: Rs. " << bill << endl;
    return 0;
}