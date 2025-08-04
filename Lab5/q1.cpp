#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    int i = n - 2;

    // Step 1: Find the first character from the end that is smaller than its next
    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the smallest character on right side of i, which is greater than str[i]
        int j = n - 1;
        while (str[j] <= str[i]) {
            j--;
        }

        // Step 3: Swap characters at i and j
        swap(str[i], str[j]);
    }

    // Step 4: Reverse the part after position i
    reverse(str.begin() + i + 1, str.end());

    cout << "Next permutation: " << str << endl;

    return 0;
}

