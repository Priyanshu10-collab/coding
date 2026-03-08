#include<bits/stdc++.h>
using namespace std;

int palindrome(int k){
    int rev = 0;
    int temp = k;

    while(temp > 0){
        rev = temp %10 + rev * 10;
        temp /= 10;
    }

    if(rev == k){
        return rev;
    }
    else{
        return -1;
    }
}
int main(){
    int min, max;
    cin>>min>>max;

    for(int i = min ; i< max ; i++){
        if(palindrome(i) == -1) continue;
        cout<<palindrome(i)<<" ";
    }

}