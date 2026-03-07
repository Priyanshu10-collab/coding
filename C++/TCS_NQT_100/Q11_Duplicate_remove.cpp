#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int n){
    set<int>a;
    for(auto i : arr){
        a.insert(i);
    }
    vector<int>ans(a.begin(),a.end());
    return ans;
}
int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    vector<int>ans = removeDuplicate(arr,n);

    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}