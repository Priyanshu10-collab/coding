#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicates(string s){
    set<char>st ;
    string word = "";
    for(int i = 0; i < s.length() ; i++){
        st.insert (s[i]);
    }

    for(auto i : st){
        word += i;
    }

    cout<<word;

}

int main(){
    string s;
    cin>>s;
    RemoveDuplicates(s);
}