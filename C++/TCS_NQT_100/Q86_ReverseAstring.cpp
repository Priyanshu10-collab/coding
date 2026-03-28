#include<bits/stdc++.h>
using namespace std;

void reverseString(string &s){
    string word = "";
    string res = ""; 
    reverse(s.begin(),s.end());
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            reverse(word.begin(),word.end());
            res += word + ' ';
            word = "";
        }
    }
    if(word != ""){
        reverse(word.begin(),word.end());
        res += word;

    }
    cout<<res;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    reverseString(s);
    return 0;
}