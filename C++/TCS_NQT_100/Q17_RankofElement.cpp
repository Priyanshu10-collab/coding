#include<bits/stdc++.h>
using namespace std;

vector<int> RankElement(vector<int> &ans){
    vector<int> sortedArr = ans;
    sort(sortedArr.begin(),sortedArr.end());

    unordered_map<int,int>mp;

    int rank = 1 ;

    for(int num : sortedArr){
        if(mp.find(num) == mp.end()){
            mp[num] = rank;
            rank++;
        }
    }

    vector<int>result;
    for(int num : ans){
        result.push_back(mp[num]);
    }

    return result;
}

int main(){

    int n ;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    vector<int> a = RankElement(arr);

    for(auto i : a){
        cout << i << " ";
    }

}