#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    int totalSum = 0;
    for(int i = 0; i < n ; i++){
        totalSum += ans[i];
    }

    int leftSum = 0;

    for(int i = 0 ; i < n ; i++){
        int rightSum = totalSum - leftSum - ans[i];

        if(leftSum == rightSum){
            cout<< i;
            return 0;
        }

        leftSum += ans[i];
    }
}