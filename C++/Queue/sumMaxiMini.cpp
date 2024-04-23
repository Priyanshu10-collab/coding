#include<iostream>
#include<deque>
using namespace std;

int solve(int *arr, int n, int k) {
    deque<int> maxi, mini;
    int ans = 0;

    // Addition of the first k-size window
    for (int i = 0; i < k; i++) {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // Iterate over the remaining windows
    for (int i = k; i < n; i++) {
        ans += arr[maxi.front()] + arr[mini.front()];

        // Removal
        while (!maxi.empty() && maxi.front() <= i - k)
            maxi.pop_front();
        
        while (!mini.empty() && mini.front() <= i - k)
            mini.pop_front();

        // Addition
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();
        
        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // Make sure to consider the last window
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main() {
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;

    return 0;
}
