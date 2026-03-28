#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n < 2 ){
        cout<< n;
    }

    int ans = (n/2) + 1;
    cout<< ans;
}