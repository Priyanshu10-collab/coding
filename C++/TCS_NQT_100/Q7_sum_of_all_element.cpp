#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> nums){
    int sum = 0;
    for(int i = 0 ; i < nums.size() - 1 ; i++){
        sum += nums[i];
    }
    return sum;
}

int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    cout<<sum(arr)<<endl;

}