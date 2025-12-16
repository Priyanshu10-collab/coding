#include<bits/stdc++.h>
using namespace std;

string removeparenthesis(string s){
    string result;
    int count = 0;

    for(char ch : s){
        if(ch == '('){
            if(count > 0){
                result += ch;
            }
            count++;
        }

        else if( ch == ')'){
            count--;
            if(count > 0){
                result += ch;
            }
        }
    }
    return result;
}

int main(){
   string ch;
   cin >> ch;
   cout<<removeparenthesis(ch);
}