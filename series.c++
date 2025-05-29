#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Series of " << n << " natural numbers:" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}