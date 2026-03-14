#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string prefix = strs[0];

    for(int i = 1; i < strs.size(); i++){
        while(strs[i].find(prefix) != 0){
            prefix.pop_back();
            if(prefix.empty()) return "";
        }
    }
    return prefix;
}

int main(){
    string s;
    getline(cin,s);

    vector<string> strs;
    string word = "";

    for(char c : s){
        if(isalpha(c)){
            word += c;
        }
        else{
            if(word != ","){
                strs.push_back(word);
                word = "";
            }
        }
    }

    if(word != "") strs.push_back(word);

    cout << longestCommonPrefix(strs);
}