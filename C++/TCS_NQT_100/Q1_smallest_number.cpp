#include<bits/stdc++.h>
using namespace std;

int smallest(vector<int>arr){
    int ans = INT_MAX;
    int n = arr.size();

    if(n == 0){
        return -1;
    }

    for(int i = 0; i < n ; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int n ;
    cin >> n;
    vector<int>arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout<<smallest(arr)<<endl;

    return 0;
}