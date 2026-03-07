#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> ans){
    int n = ans.size();
    int  largest = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(ans[i] > largest){
            largest = ans[i];
        }
    }
    return largest;
}

int main(){
    int n ;
    cin>> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }

    cout<<largest(arr)<<endl;
}