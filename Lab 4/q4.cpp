#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int a = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than a one position ahead
        while (j >= 0 && arr[j] > a) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = a; // Insert a at correct position
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  // assuming max size 100
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
    	cin >> arr[i];

	}
        
    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

