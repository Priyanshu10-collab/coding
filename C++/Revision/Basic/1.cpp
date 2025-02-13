#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int i = 1;
    int sum = 0;
    while(i <= number) {
        sum += i;  // Add i to sum
        i++;  // Increment i
    }
    cout << sum;
    return 0;
}
