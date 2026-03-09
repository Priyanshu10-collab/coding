#include<bits/stdc++.h>
using namespace std;

string removeCharacterExceptAlphabet(string s){
    string res="";
    for(int i = 0 ; i < s.length() ; i++){
        s[i] = tolower(s[i]);
        if(s[i] >= 'a' && s[i] <= 'z'){
            res += s[i];
        }
        else{
            continue;
        }
    }
    return res;
}
int main(){
    string s;
    getline(cin,s);
    cout<<removeCharacterExceptAlphabet(s);

}