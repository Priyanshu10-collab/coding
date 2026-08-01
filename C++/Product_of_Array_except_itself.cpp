#include<bits/stdc++.h>
using namespace std;

// void ProductExceptItself(vector<int> &nums){
//     int n = nums.size();
//     vector<int> ans(n,1);
//     vector<int> prefix(n,1);
//     vector<int> suffix(n,1);

//     for(int i = 1; i < nums.size(); i++){
//         prefix[i] = prefix[i-1] * nums[i-1];
//     }

//     for(int j = n-2 ; j >= 0; j--){
//         suffix[j] = suffix[j+1] * nums[j+1];
//     }

//     for(int i = 0 ; i < n ; i++){
//         ans[i] = prefix[i]*suffix[i];
//     }

//     nums = ans;

// }


vector<int> productExceptItself(vector<int>&a){
    int n = a.size();
    vector<int>ans(n,1);

    for(int i = 0; i< n;i++ ){
        int product = 1;
        for(int j = 0 ; j < n; j++){
            if(i != j){
                product *= a[j];
            }
        }
        ans[i] = product;

    }
    return ans;
}
int main(){

    vector<int>a = {1,2,3,4};
    vector<int>ans = productExceptItself(a);

    for(auto i : ans){
        cout<<i<<" ";
    }

}