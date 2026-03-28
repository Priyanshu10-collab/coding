#include<bits/stdc++.h>
using namespace std;

int countNumberWords(string s){
    int count = 0;
   

    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')){
            count++;
        }
        if(s[0] == ' ' && s[1] == ' ' || s[s.length()-1] == ' '){
        continue;;
    }
    }

    return count;
}

int main(){
    string s;
    getline(cin,s);
    cout<<countNumberWords(s);
}