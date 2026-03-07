#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int k){
    int rev = 0;
    int temp = k;
    while(temp > 0){
        rev = temp % 10 + rev * 10;
        temp /= 10;
    }
        if(rev == k ){
                return true;
            }
            else{
                return false;
            }
    }
int main(){
    int n ;
    cin >> n;

    cout<<isPalindrome(n);

    return 0;

}