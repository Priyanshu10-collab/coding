#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string a, int i){
    if(i >= a.length() / 2) return true;

    if(a[i] != a[a.length() - i -1]){
        return false;
    }

    return isPalindrome(a, i+1);
}

int main(){
    string a;
    cin >> a;
    cout << isPalindrome(a, 0);
}