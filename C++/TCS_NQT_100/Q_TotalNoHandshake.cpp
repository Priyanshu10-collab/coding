#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t != 0)
    {

        int n;
        cin >> n;
        if (n <= 1)
        {
            return 0;
        }
        int totalHandshake = n * (n - 1) / 2;
        cout << totalHandshake<<endl;
        t--;
    }
}