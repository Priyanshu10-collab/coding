#include<bits/stdc++.h>
using namespace std;

string removeBrackets(string s){
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == ')'){
            continue;
        }
        word += s[i];
    }
    return word;
}
int main(){
    string s;
    getline(cin,s);
    cout<<removeBrackets(s);

}