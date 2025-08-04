#include <iostream>
using namespace std;

// Function to print the current combination
void printCombination(int comb[], int r) {
    for (int i = 0; i < r; i++) {
        cout << comb[i] << " ";
    }
    cout << endl;
}

// Function to generate the next combination
bool nextCombination(int comb[], int n, int r) {
    int i = r - 1;

    // Find the rightmost element that can be incremented
    while (i >= 0 && comb[i] == n - r + i + 1) {
        i--;
    }

    if (i < 0)
        return false; // No more combinations

    // Increment this element
    comb[i]++;

    // Update all elements after it
    for (int j = i + 1; j < r; j++) {
        comb[j] = comb[j - 1] + 1;
    }

    return true;
}

int main() {
    int n, r;

    cout << "Enter total elements (n): ";
    cin >> n;
    cout << "Enter combination size (r): ";
    cin >> r;

    // Initialize the first combination: {1, 2, ..., r}
    int comb[100];
    for (int i = 0; i < r; i++) {
        comb[i] = i + 1;
    }

    // Print the first combination
    printCombination(comb, r);

    // Ask user how many next combinations to generate
    int count;
    cout << "How many next combinations to generate? ";
    cin >> count;

    while (count-- && nextCombination(comb, n, r)) {
        printCombination(comb, r);
    }

    return 0;
}

