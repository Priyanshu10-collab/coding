#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin>>n;

    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    int a  = 0;
    for(int  i= 0 ; i< n ; i++){
        if(ans[i] != 0){
            swap(ans[i],ans[a]);
            a++;
        }
        else{
            continue;
        }
    }

    for(auto a : ans){
        cout<<a<<' ';
    }
}