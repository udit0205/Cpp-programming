#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for(int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to calculate nCr
unsigned long long nCr(int n, int r) {
    if(r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    cout << "Enter n and r to find nCr (n >= r): ";
    cin >> n >> r;
    cout << "nCr = " << nCr(n, r) << endl;

    return 0;
}