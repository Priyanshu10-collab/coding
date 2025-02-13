#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int sum = 0;

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;

        n = n / 10;
    }

    cout << "Product of digits: " << product << endl;
    cout << "Sum of digits: " << sum << endl;

    cout << "Difference of product and sum: " << product - sum << endl;
    cout << "Addition of product and sum: " << product + sum << endl;

    return 0;
}