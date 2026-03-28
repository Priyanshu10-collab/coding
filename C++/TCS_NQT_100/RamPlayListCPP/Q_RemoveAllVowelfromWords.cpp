#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    string word;
    for(char c :a ){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            continue;
        }
        word += c;
    }

    cout<<word<<endl;


}