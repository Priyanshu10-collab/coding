#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n){
    if(n < 10){
        return n;
    }

    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    return sumOfDigit(sum);
}

int main(){
    int n;
    cin >> n;
    cout << sumOfDigit(n);
}