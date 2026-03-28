#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ans;
    getline(cin, ans);

    string a;
    cin >> a;

    unordered_map<string, int> ab;
    string word = "";

    for (int i = 0; i < ans.length(); i++)
    {
        if (ans[i] != ' ')
        {
            word += ans[i];
        }
        else
        {
            if (word != "")
            {
                ab[word]++;
                word = "";
            }
        }
    }

    if (word != "")
    {
        ab[word]++;
    }

    cout << ab[word] << endl;
}
