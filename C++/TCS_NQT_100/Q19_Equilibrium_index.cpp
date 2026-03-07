#include<bits/stdc++.h>
using namespace std;

int equilibriumIndex(vector<int> &nums){
    int totalsum = 0;

    for(int i = 0 ; i < nums.size() ; i++){
        totalsum += nums[i];
    }

    int leftsum = 0;
    int rightSum = totalsum;

    for(int i = 0 ; i < nums.size() ; i++){
        rightSum -= nums[i];

        if(leftsum == rightSum){
            return i;
        }

        leftsum += nums[i];
    }

    return -1;
}


int main (){

    int n ; 
    cin >> n;
    vector<int>ans(n);

    for(int i = 0 ; i < n ; i++){
        cin >> ans[i];
    }

    cout<<equilibriumIndex(ans);



    return 0;
}