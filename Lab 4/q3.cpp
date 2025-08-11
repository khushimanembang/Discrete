#include <iostream>
using namespace std;

// Recursive function to return nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}

