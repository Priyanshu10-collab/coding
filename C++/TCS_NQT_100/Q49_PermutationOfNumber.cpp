#include<bits/stdc++.h>
using namespace std;

int factorial(int n ){
    if(n == 0) return 1;

    return n*factorial(n-1);
}
int permutationOfNumber(int N , int r){
    return factorial(N)/factorial(N-r);
}

int main(){
    int n , r;
    cin >> n >> r;
    cout << permutationOfNumber(n,r);

}