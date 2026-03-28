#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int N;
    cin >>n >>N;


    vector<int>ans(n);
    for(int i = 0 ; i < n; i++){
        cin>>ans[i];
    }

    unordered_map<int,int>mp;
    for(auto i : ans){
        mp[i]++;
    }

    int threshold = N/3;

    for(auto i : mp){
        if(i.second > threshold){
            cout<<i.first;
            return 0;
        }
    }
}