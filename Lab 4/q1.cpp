#include <iostream>
using namespace std;

long long power(int a, int n) {
    if (n == 0)
        return 1; // base case: a^0 = 1
    else
    return a * power(a, n - 1); // recursive step
}

int main() {
    int a, n;

    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (n): ";
    cin >> n;

    long long result = power(a, n);
    cout << a << "^" << n << " = " << result << endl;

    return 0;
}

