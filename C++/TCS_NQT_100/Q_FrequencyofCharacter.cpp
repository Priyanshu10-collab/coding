#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    map<char,int>mp;
    set<char>v;

    for(int i = 0 ; i < s.size(); i++){
        mp[s[i]] ++;
        v.insert(s[i]);
    }

    for(auto i : v){
        cout<<i<<mp[i];
    }

}