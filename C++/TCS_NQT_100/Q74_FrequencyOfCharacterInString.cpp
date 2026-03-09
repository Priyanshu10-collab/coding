#include<bits/stdc++.h>
using namespace std;

void CharAndFreq(string s){
    unordered_map<char,int> mp;
    for(int i : s){
        mp[i]++;
    }

    for(auto a : mp){
        cout<<a.first<<a.second<<" ";
    }

}

int main(){
    string s ;
    getline(cin,s);
    CharAndFreq(s);
}