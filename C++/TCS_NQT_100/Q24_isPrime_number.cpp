#include<bits/stdc++.h>
using namespace std;

bool isPrime(int k){
    for(int i = 2 ; i < sqrt(k); i++){
        if(k % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    cout<<isPrime(n);
}