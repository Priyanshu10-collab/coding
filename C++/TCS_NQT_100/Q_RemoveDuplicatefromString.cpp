#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    set<char>st;

    for(int i = 0; i < s.size(); i++){
        st.insert(s[i]);
    }

    string res = "";
    for(auto a : st){
        res += a;
    }

    return res;
}

int main(){

    string s;
    getline(cin,s);
    cout<<removeDuplicate(s);

}