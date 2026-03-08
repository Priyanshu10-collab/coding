#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the number  and  its power"<<endl;
    cin>>a>>b;

    int ans = 1;

    for(int i = 0; i < b; i++){
        ans *= a;
    }
    cout<<ans;
}