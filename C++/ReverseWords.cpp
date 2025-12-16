#include <bits/stdc++.h>
using namespace std;

string reverseWords(string st) {
    vector<string> words;
    string word = "";

    for (int i = 0; i <= st.size(); i++) {
        if (i < st.size() && st[i] != ' ') {
            word += st[i];
        } else {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
    }

    reverse(words.begin(), words.end());

    string ans = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) ans += " ";
        ans += words[i];
    }

    return ans;
}

int main() {
    string st;
    getline(cin, st);
    cout << reverseWords(st) << endl;
    return 0;
}
