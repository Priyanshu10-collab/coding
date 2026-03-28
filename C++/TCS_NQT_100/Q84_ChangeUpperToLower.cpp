#include<bits/stdc++.h>
using namespace std;

void convertLetterCase(string &s){
    int n = s.length();
    for(int i = 0 ; i < n ; i++){
        int ascii = int (s[i]);

        if(ascii >= 97 && ascii <= 122 ){
            s[i] = toupper(s[i]);
        }
        else if(ascii >= 65 && ascii <= 90){
            s[i] = tolower(s[i]);
        }
        else if(s[i] == ' '){
            continue;
        }
    }
}

int main(){
    string s;
    getline(cin,s);
    convertLetterCase(s);
    cout<<s;
}