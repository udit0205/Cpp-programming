#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    double num;
    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }

    double average = sum / n;
    cout << "Average = " << average << endl;

    return 0;
}