#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int a ,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    int lcm = (a*b)/ans;
    cout<<"GCD: "<<ans<<endl;
    cout<<"LCM: "<<lcm<<endl;


}