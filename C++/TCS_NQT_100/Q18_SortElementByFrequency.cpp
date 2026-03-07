#include<bits/stdc++.h>
using namespace std;

vector<int> sortByfrequency(vector<int> &nums){

    unordered_map<int,int>mp;

    for(auto num : nums){
        mp[num]++;
    }

    vector<int>frequency;
    for(auto a : mp){
        frequency.push_back(a.second);
    }

    sort(nums.begin(),nums.end());
    


}

int main(){

}