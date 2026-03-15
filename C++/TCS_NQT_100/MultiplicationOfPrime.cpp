#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <  2){
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int findNthPrime(int n){
    int count = 0;
    int num =1;

    while(count < n){
        num++;
        if(isPrime(num)){
            count++;
        }
    }
    return num;
}


int main(){
    int a,b;
    cin>>a>>b;
    int prime1 = findNthPrime(a);
    int prime2 = findNthPrime(b);

    cout<<prime1*prime2 - 1 <<endl;

}