#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<int> a;
    string b;

    while (getline(ss, b, ' '))
    {
        a.push_back(stoi(b));
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int minElement = a[0];
    int maxElement = a[0];
    unordered_map<int, int> ab;

    for (auto c : a)
    {
        ab[c]++;
    }

    for (auto i : ab)
    {

        if (i.second > maxFreq || (i.second == maxFreq && i.first < maxElement))
        {
            maxFreq = i.second;
            maxElement = i.first;
        }

        if (i.second < minFreq || (i.second == minFreq && i.first < minElement))
        {
            minFreq = i.second;
            minElement = i.first;
        }
    }

    cout << maxElement << " " << minElement;
}
