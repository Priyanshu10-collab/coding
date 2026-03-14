#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans(n);

    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    int max = ans[0];
    int count = 1;

    for(int i = 1; i< n; i++){
        if(ans[i] > max){
            max = ans[i];
            count++;
        }
    }

    cout<<count;
}