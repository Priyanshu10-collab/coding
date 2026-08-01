#include<bits/stdc++.h>
using namespace std;

vector<int> sortByfrequency(vector<int> &nums){

    unordered_map<int,int> mp;

    for(auto num : nums){
        mp[num]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b){
        if(mp[a] == mp[b]){
            return a > b;   // same frequency → larger first
        }
        return mp[a] < mp[b]; // smaller frequency first
    });

    return nums;
}

int main(){
    vector<int> nums = {1,1,2,2,2,3};

    vector<int> ans = sortByfrequency(nums);

    for(auto i : ans){
        cout << i << " ";
    }
}