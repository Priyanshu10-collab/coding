#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i].first >> ans[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (ans[j].first < ans[minindex].first || ans[j].first == ans[minindex].first && ans[j].second < ans[minindex].second)
            {
                minindex = j;
            }
        }
        swap(ans[i], ans[minindex]);
    }

    for (auto a : ans)
    {
        cout << a.first << ' ' << a.second << endl;
    }
}