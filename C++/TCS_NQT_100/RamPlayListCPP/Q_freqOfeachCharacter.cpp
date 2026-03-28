#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    unordered_map<char,int>ab;

    for(int i = 0; i < s.length(); i++){
        ab[s[i]] += 1;
    }

    for(auto i : ab){
        cout<<i.first<<" "<<i.second<<endl;
    }
}