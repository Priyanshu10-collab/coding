#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &ans){

    int res = ans[0];
    int maxProduct = ans[0];
    int minProduct = ans[0];

    for(int i = 0 ; i < ans.size() ; i++){
        int curr = ans[i];


        if(curr < 0 ){
            swap(maxProduct,minProduct);
        }

        maxProduct = max(curr, maxProduct*curr);
        minProduct = min(curr, minProduct*curr);

        res = max(res, maxProduct);
    }
    return res;
}

int main(){
    int n ;
    cin >> n;

    vector<int>ans(n);
    for(int i = 0 ; i < ans.size(); i++){
        cin>>ans[i];
    }

    int answer = maxProduct(ans);
    cout <<  answer;
}