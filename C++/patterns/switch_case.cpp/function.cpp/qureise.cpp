#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>v[n+1];
    for(int i =1;i<n;i++){
        cin>>v[i];
    }
    for(int i =1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;

        int ans =0;
        ans = v[r]-v[l-r];
    }    
 return 0;
}