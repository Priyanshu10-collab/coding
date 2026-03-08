#include<bits/stdc++.h>
using namespace std;

int armstrong(int k ){
    int sum = 0 ;
    int n = k;
    int a = to_string(k).length();

    while(n > 0){
        int rem = n % 10;
        sum += pow(rem, a);
        n = n / 10;
    }

    return sum == k;
}

int main(){
    int n ;
    cin >> n;

    cout<<armstrong(n);
}