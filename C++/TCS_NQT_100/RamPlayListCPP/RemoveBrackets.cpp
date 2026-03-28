#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string word;
    for(auto ch : s){
        if(ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']'){
            continue;
        }
        else{
            word += ch;
        }
    }

    cout<<word;
}