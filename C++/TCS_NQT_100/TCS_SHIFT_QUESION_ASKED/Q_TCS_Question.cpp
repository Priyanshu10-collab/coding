#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i = 0; i < n ; i++){
        cin>>ans[i];
    }

    if(ans.size() == 0){
        return 0;
    }

    double sum = 0;
    int count = 0;
    double average = 0;

    for(int i = 0 ; i < n ; i++){
        if(ans[i]%2 == 1){
            sum += ans[i];
            count++;
        }
        else if(ans[i]%2 == 0){
            continue;
        }
    }

    average = sum/count;

    cout<<sum<<" "<<count<<" "<<fixed<<setprecision(2)<<average;
}