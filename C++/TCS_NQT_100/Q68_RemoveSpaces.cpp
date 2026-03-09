#include<bits/stdc++.h>
using namespace std;

string removeSpaces(string s){
    string res ="";
    for(int i = 0; i < s.length() ; i++){
        if(s[i] == ' '){
            continue;
        }
        else{
            res += s[i];
        }
    }
    return res;
}

int main(){
    string s;
    getline(cin,s);
    cout<<removeSpaces(s);
}