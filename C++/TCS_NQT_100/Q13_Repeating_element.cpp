#include<bits/stdc++.h>
using namespace std;

int repeatingElement(vector<int> ans){
    unordered_map<int,int>mp;

    for(int num:ans){
        mp[num]++;
    }

    for(auto it : mp){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }
}
int main(){
    int n ;
    cin >> n;
    vector<int>nums(n);

    for(int i = 0 ; i < n; i++){
        cin>>nums[i];
    }

    repeatingElement(nums);


}