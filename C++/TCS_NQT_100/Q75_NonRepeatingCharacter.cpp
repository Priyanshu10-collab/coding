#include<bits/stdc++.h>
using namespace std;

void nonRepeatingCharacter(string s){
    unordered_map<char,int>mp;

    for(char i : s){
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second == 1){
            cout<<i.first<<" ";
        }
    }

}
int main(){
    string s;
    getline(cin,s);
    nonRepeatingCharacter(s);

}