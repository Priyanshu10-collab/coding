#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 1 Approach

    int maximum = INT_MIN;

    // for(int i = 0 ; i < n ; i++){
    //     int sum = 0;
    //     for(int j = i ; j < n; j++){
    //         sum += a[j];
    //         maximum = max(sum,maximum);
    //     }
    // }
    // cout<<maximum;

    //2 Approach
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum < 0)
        {
            sum = 0;
        }

        if (sum > maximum)
        {
            maximum = sum;
        }
    }

    cout<<maximum;
}