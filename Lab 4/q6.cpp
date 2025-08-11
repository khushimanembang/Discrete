#include <iostream>
using namespace std;

int Search(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k)
            return i;  // Return index if found
    }
    return -1;  // Not found
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  // assuming max size 100
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to find: ";
    cin >> k;

    int res = Search(arr, n, k);

    if (res != -1)
        cout << k << " found at index " << res << endl;
    else
        cout << k << " not found in the array." << endl;

    return 0;
}

