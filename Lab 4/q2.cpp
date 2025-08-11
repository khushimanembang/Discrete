#include <iostream>
using namespace std;

int modPower(int b, int n, int m) {
    int result = 1;
    b = b % m;  // Reduce base if greater than mod

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * b) % m;  // Multiply when n is odd
        }
        b = (b * b) % m;  // Square the base
        n = n / 2;
    }

    return result;
}

int main() {
    int b, n, m;

    cout << "Enter base (b): ";
    cin >> b;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;
    
    cout << b << "^" << n << " mod " << m << " = " << modPower(b, n, m); << endl;

    return 0;
}

