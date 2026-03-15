#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<= 0){
        return false;
    }
    for(int i = 2; i < sqrt(n) ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfPrime(int n){
    int sum = 0;
    for(int i = 0; i < n ; i++){
        if(isprime(i)){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sumOfPrime(n);

}