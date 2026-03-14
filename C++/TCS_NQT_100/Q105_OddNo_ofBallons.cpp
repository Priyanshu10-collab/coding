#include<bits/stdc++.h>
using namespace std;

char func(vector<char>ans){
    unordered_map<char,int>mp;

    for(auto i : ans){
        mp[i]++;
    }

    for(auto i : mp){
        if(i.second % 2 == 0){
            continue;
        }
        if(i.second % 2 == 1){
            return i.first;
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<char>ans(n);

    for(int i = 0 ; i < n; i++){
        cin>>ans[i];
    }

    cout<<func(ans);
}