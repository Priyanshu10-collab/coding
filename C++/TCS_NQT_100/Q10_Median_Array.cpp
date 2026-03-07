#include<bits/stdc++.h>
using namespace std;

int median(vector<int> ans){
    int n = ans.size();
    sort(ans.begin(),ans.end());
    return ans[n/2];
}

int main(){
    int n ;
    cin >> n ;

    vector<int>ans(n);
    for(int i = 0; i < n ; i++){
        cin >> ans[i];
    }

    cout<<median(ans);
}