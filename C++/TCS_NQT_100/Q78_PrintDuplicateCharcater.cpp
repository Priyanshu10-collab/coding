#include<bits/stdc++.h>
using namespace std;

void PrintDuplicateCharacter(string s){
    unordered_map<char,int>mp;

    for(auto i : s){
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second > 1){
            cout<<i.first<<": "<<i.second <<" ";
        }
    }

}
int main(){
    string a;
    cin >> a;
    PrintDuplicateCharacter(a);

}