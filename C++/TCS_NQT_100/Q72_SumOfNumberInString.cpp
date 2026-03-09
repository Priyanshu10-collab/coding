#include<bits/stdc++.h>
using namespace std;

int sumOfNumberInString(string s){
    int sum = 0;
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            word += s[i];
        }
        else if(word != ""){
            sum += stoi(word);
            word = "";
        }
    }

    if(word != ""){
    sum += stoi(word);
    }

    return sum;
}


int main(){
    string s;
    getline(cin,s);
    cout<<sumOfNumberInString(s);
}