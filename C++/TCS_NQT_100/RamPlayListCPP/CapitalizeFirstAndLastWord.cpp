#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.length();

    if(n > 0){
        s[0] = toupper(s[0]);
    }

    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == ' ' && s[i] != ' '){
            s[i] = toupper(s[i]);
        }
         // Last letter of word
        if(s[i] != ' ' && (i == n-1 || s[i+1] == ' ')){
            s[i] = toupper(s[i]);
        }
    }

    cout << s;
}