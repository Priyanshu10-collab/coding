#include<bits/stdc++.h>
using namespace std;

int nonRepeating(vector<int> nums){
    unordered_map<int,int>mp;

    for(int num : nums){
        mp[num]++;
    }

    for(auto it : mp){
        if(it.second == 1){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    int n ;
    cin >> n ; 

    vector<int>ans(n);

    for(int i = 0 ; i < n ; i++){
        cin >> ans[i];
    }

    nonRepeating(ans);
}