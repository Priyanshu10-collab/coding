#include<bits/stdc++.h>
using namespace std;

string capitaliseFirstAndLast(string s){
    string res = "";
    string word = "";

    for(int i = 0; i < s.length(); i++){

        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            word += s[i];
        }
        else{
            if(word != ""){
                word[0] = toupper(word[0]);
                word[word.length()-1] = toupper(word[word.length()-1]);
                res += word + " ";
                word = "";
            }
        }
    }

    if(word != ""){
        word[0] = toupper(word[0]);
        word[word.length()-1] = toupper(word[word.length()-1]);
        res += word;
    }

    return res;
}

int main(){
    string s;
    getline(cin,s);
    cout<<capitaliseFirstAndLast(s);
}