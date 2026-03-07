#include<bits/stdc++.h>
using namespace std;

int average(vector<int> &nums){
    int sum = 0;
    for(int i = 0 ; i < nums.size(); i++){
        sum += nums[i];
    }

    return sum / nums.size();
}

int main(){
    int n ;
    cin >> n;

    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    cout<<average(ans)<<endl;
}