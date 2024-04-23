#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;        // Initialize 'largest' to the smallest possible integer value
    int secondLargest = INT_MIN;  // Initialize 'secondLargest' to the smallest possible integer value

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            // If the current element is greater than 'largest', update 'secondLargest' and 'largest'
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            // If the current element is greater than 'secondLargest' but less than 'largest',
            // update only 'secondLargest'
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 1) {
        cout << "Please enter an array of size 2 or more." << endl;
        return 0;
    }

    int *arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != INT_MIN) {
        cout << "The second largest element is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }

     // Free the dynamically allocated memory
    return 0;
}
