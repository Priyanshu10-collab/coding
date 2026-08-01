#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, diff;
    cin >> n >> diff;

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    int index = 0;

    while (ans.size() > 1)
    {
        index = (index + diff - 1) % ans.size();
        ans.erase(ans.begin() + index);
    }

    cout << ans[0];
}