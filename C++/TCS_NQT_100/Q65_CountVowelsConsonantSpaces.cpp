#include<bits/stdc++.h>
using namespace std;

int CountAll(string s){
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    for(int i = 0; i < s.length() ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] =='E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vowels++;
        }
        else if(s[i] == ' '){
            spaces++;
        }
        else{
            consonants++;
        }
    }

    cout<<"Vowels : "<<vowels<<endl;
    cout<<"Consonants : "<<consonants<<endl;
    cout<<"Spaces : "<<spaces<<endl;
}

int main(){
    string s;
    getline(cin,s);
    CountAll(s);
}