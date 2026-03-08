#include<bits/stdc++.h>
using namespace std;

void replaceZeroWithOne(int n){
    string a = to_string(n);
    for(int i=0;i<a.length();i++){
        if(a[i] == '0'){
            a[i] = '1';
        }
    }
    cout<<stoi(a)<<endl;
}

int main(){
    int n;
    cin>>n;
    replaceZeroWithOne(n);
}