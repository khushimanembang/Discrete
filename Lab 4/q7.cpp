#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
            return mid;  // Found at index mid
        else if (arr[mid] < k)
            low = mid + 1;  // Search in right half
        else
            high = mid - 1; // Search in left half
    }

    return -1;  // Not found
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  // Assuming max size 100
    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to find: ";
    cin >> k;

    int res = binarySearch(arr, n, k);

    if (res != -1)
        cout << k << " found at index " << res << endl;
    else
        cout << k<< " not found in the array." << endl;

    return 0;
}

