#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,j,B,P;

    cin>>n>>k>>j>>B>>P;

    int ans = (B+k -1)/k + (P+j -1)/j;

    cout<<n-ans<<endl;


}