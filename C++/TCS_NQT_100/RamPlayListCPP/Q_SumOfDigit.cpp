#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n ;
    cin >> n;
    float sum = 0;

    while(n > 0){
        float a = n %10;
        sum += a;
        n = n/10;
    }

    cout<<sum;
}