#include <iostream>
using namespace std;

// Merge two sorted subarrays arr[l..m] and arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;  // size of left subarray
    int n2 = r - m;      // size of right subarray

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++){
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++){
    	 R[j] = arr[m + 1 + j];
	}
}

    int i = 0, j = 0, k = l;

    // Merge back into arr[l..r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        }
        else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k++] = L[i++];
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k++] = R[j++];
    }

    delete[] L;
    delete[] R;
}

// Recursive merge sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // midpoint

        // Sort first half
        mergeSort(arr, l, m);
        // Sort second half
        mergeSort(arr, m + 1, r);

        // Merge sorted halves
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
    	cin >> arr[i];
	}
        

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
    	   cout << arr[i] << " ";
	}
    cout << endl;

    delete[] arr;
    return 0;
}

