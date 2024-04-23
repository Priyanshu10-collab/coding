#include <iostream>
#include <vector>
using namespace std;

int firstOccurrences(vector<int> &arr, int s, int e, int key) {
    // Base case
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    // Check if the middle element is the key
    if (arr[mid] == key) {
        // If this is the first occurrence, or the previous element is not equal to the key
        if (mid == s || arr[mid - 1] != key)
            return mid;
        else
            return firstOccurrences(arr, s, mid - 1, key);
    }

    // If key is greater, search in the right half
    if (arr[mid] < key)
        return firstOccurrences(arr, mid + 1, e, key);
    // If key is smaller, search in the left half
    else
        return firstOccurrences(arr, s, mid - 1, key);
}

int lastOccurrences(vector<int> &arr, int s, int e, int key) {
    // Base case
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    // Check if the middle element is the key
    if (arr[mid] == key) {
        // If this is the last occurrence, or the next element is not equal to the key
        if (mid == e || arr[mid + 1] != key)
            return mid;
        else
            return lastOccurrences(arr, mid + 1, e, key);
    }

    // If key is greater, search in the right half
    if (arr[mid] < key)
        return lastOccurrences(arr, mid + 1, e, key);
    // If key is smaller, search in the left half
    else
        return lastOccurrences(arr, s, mid - 1, key);
}

int countOccurrences(vector<int> &arr, int key) {
    int first = firstOccurrences(arr, 0, arr.size() - 1, key);
    int last = lastOccurrences(arr, 0, arr.size() - 1, key);

    if (first != -1 && last != -1)
        return (last - first) + 1;
    else
        return 0;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 5};
    int key = 2;

    int firstOccurrence = firstOccurrences(arr, 0, arr.size() - 1, key);
    int lastOccurrence = lastOccurrences(arr, 0, arr.size() - 1, key);
    int totalOccurrences = countOccurrences(arr, key);

    if (firstOccurrence != -1) {
        cout << "The first occurrence of " << key << " is at index " << firstOccurrence <<endl;
        cout << "The last occurrence of " << key << " is at index " << lastOccurrence <<endl;
        cout << "The total number of occurrences of " << key << " is " << totalOccurrences <<endl;
    } else {
        cout << key << " is not present in the array" <<endl;
    }

    return 0;
}
