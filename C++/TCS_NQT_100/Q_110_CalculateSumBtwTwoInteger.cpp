#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>=b || a < 0 ||  b > 9999){
        cout<<"Invalid Input";
    }

    int sum = 0;
    for(int i = a ; i <= b ; i++){
        sum+=i;
    }
    cout<<sum;
}