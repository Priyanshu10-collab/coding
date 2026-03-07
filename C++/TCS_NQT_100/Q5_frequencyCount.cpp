#include<bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> nums){
    int n = nums.size();
    unordered_map<int,int>mp;

    for(int num : nums){
        mp[num]++;
    }

    for(auto it : mp){
        cout<< it.first << " " << it.second << endl;
    }

}

int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    frequencyCount(arr);



}