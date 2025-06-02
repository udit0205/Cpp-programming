#include <iostream>
using namespace std;

int main() {
    int n, newElement;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // assuming max size 100

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new element to insert at 1st location: ";
    cin >> newElement;

    // Shift elements to the right
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = newElement;
    n++;

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}