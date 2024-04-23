#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr, int low, int high) {
    // Base case: If the array has only one element, it's the pivot
    if (low == high) {
        return arr[low];
    }

    int mid = (low + high) / 2;

    // Check if the mid element is the pivot
    if (arr[mid] > arr[mid + 1]) {
        return arr[mid];
    }

    // If the mid element is less than the element at the high index,
    // the pivot must be in the right subarray
    if (arr[mid] < arr[high]) {
        return findPivot(arr, mid + 1, high);
    }

    // If the mid element is greater than or equal to the element at the high index,
    // the pivot must be in the left subarray
    return findPivot(arr, low, mid);
}

int main() {
    vector<int> arr = {4, 5, 6, 9, 1,6,8,7,5,2, 2, 3};
    int pivot = findPivot(arr, 0, arr.size() - 1);
    cout << "The pivot element is: " << pivot <<endl;

    return 0;
}
