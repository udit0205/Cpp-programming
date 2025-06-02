#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double arr[n], sum = 0;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = sum / n;
    cout << "Average = " << avg << endl;

    return 0;
}