#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int element, position;

    std::cout << "Current array: ";
    for (int n : arr) std::cout << n << " ";
    std::cout << "\nEnter element to insert: ";
    std::cin >> element;
    std::cout << "Enter position (0-based index): ";
    std::cin >> position;

    if (position < 0 || position > arr.size()) {
        std::cout << "Invalid position!\n";
        return 1;
    }

    arr.insert(arr.begin() + position, element);

    std::cout << "Array after insertion: ";
    for (int n : arr) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}