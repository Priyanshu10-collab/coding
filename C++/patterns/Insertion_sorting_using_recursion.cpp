#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // Base case: If the array has only one element, it's already sorted.
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements recursively
    insertionSort(arr, n - 1);

    // Insert the last element into its correct position in the sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-1] that are greater than last
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}