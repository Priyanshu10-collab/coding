#include<bits/stdc++.h>
using namespace std;

string removeVowels(string s){
    string res = "";
    for(int i = 0; i < s.length() ; i++){
        s[i] = tolower(s[i]);
        if(s[i]== 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
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
    cout << removeVowels(s);
}