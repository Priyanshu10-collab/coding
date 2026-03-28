#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    string word;

    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z'){
            word += a[i];
        }else{
            continue;
        }
    }

    cout<<word;
}