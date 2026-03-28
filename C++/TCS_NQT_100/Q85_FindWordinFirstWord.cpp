#include<bits/stdc++.h>
using namespace std;

int findWord(string a , string b){
    int t = a.find(b);
    return t;
}

int main(){
    string a , b;
    cin>>a>>b;
    cout<<findWord(a,b);
}

