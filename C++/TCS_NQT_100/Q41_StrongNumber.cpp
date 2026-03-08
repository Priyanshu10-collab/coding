#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

bool strongNumber(int n){
    int sum = 0;
    int temp = n;

    while(temp > 0){
        int rem = temp % 10 ;
        sum += factorial(rem);
        temp /= 10;
    }

    if(sum == n){
        return true;
    }
    return false;
}
int main(){
    int n ;
    cin >> n;

    cout<<strongNumber(n);


}