#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    string a = to_string(n);
    int sum = 0;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++){
        if(a[i] == '1'){
            sum += pow(2,i);
        }
    }
    return sum;
}


int main(){
    int n;
    cin >> n;
    cout << binaryToDecimal(n);
}