#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n <= 1){
        return -1;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return -1;
        }
    }
    return 1;
}

int main(){
    int min , max ;
    cin >> min >> max ;

    for(int i = min ; i <= max ; i++){
        if(isPrime(i) == -1) continue;
        cout << i << " ";
    }
}