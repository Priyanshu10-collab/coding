#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void recursiveSelectionSort(int arr[], int n, int index = 0) {
    // Base case: If we have reached the last element, the array is sorted.
    if (index == n - 1) {
        return;
    }

    // Find the minimum element in the remaining unsorted part of the array.
    int min_index = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    // Swap the minimum element with the current element.
    swap(arr[index], arr[min_index]);

    // Recursively sort the rest of the array.
    recursiveSelectionSort(arr, n, index + 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    recursiveSelectionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}