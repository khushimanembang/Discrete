#include <iostream>
using namespace std;

// Function to compute (base^exp) % mod efficiently
long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp % 2 == 1) { // If odd
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }

    return result;
}

// Fermat primality test
bool isPrimeFermat(int p, int a = 2) {
    if (p <= 1) return false;
    if (p == 2) return true;

    // If a^(p-1) % p != 1 => not prime
    if (powerMod(a, p - 1, p) != 1)
        return false;

    return true; // Probably prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // You can try more values of 'a' for stronger result
    if (isPrimeFermat(number))
        cout << number << " is probably prime (Fermat test)." << endl;
    else
        cout << number << " is not prime." << endl;

    return 0;
}

