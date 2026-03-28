#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }

    set<int>l;
    for(auto c : a){
        l.insert(c);
    }

    cout<<l.size();
}