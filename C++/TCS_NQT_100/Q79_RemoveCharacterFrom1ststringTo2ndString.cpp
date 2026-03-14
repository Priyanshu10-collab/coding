#include<bits/stdc++.h>
using namespace std;

void RemoveCharacterFrom1ststringTo2ndString(string s1, string s2){
    set<char> st(s2.begin(), s2.end());
    string word = "";

    for(int i = 0; i < s1.length(); i++){
        if(st.find(s1[i]) == st.end()){
            word += s1[i];
        }
    }

    cout << word;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    RemoveCharacterFrom1ststringTo2ndString(s1, s2);
}