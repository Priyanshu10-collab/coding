#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int sum = 0 ;

    for(auto a : s){
        if(a >= '0' && a <= '9'){
            sum += a - '0';
        }
    }
    cout<<sum;
}