#include<bits/stdc++.h>
using namespace std;

bool isHarshad(int n){
    int sum = 0;
    int a = n;
    while(a > 0){
        int rem = a % 10;
        sum += rem;
        a /= 10;
    }
    if(n % sum == 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << isHarshad(n);

}