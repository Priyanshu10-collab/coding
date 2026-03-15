#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> &ans){
    int an = 0;
    for(int i = 0 ; i < ans.size(); i++){
        an = an ^ ans[i];
    }
    return an;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);

    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    cout<<singleElement(ans);
}