#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == '*'){
            count1++;
        }
        else if(s[i] == '#'){
            count2++;
        }
    }

    if(count1 == count2){
        cout<<"0";
    }
    else if(count1 > count2){
        cout<<"Positive";
    }
    else{
        cout<<"Negative";
    }

    return 0;
}