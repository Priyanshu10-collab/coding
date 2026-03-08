#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n){
    int a = n*n;
    int b = n %10;
    int c = a %10;

    if(b == c){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    cout<<isAutomorphic(n);

}