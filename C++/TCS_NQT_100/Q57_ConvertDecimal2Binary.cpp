#include<bits/stdc++.h>
using namespace std;

void DecimalToBinary(int x){
    string a = "";
    while(x > 0){
        if(x % 2 == 0){
            a += "0";
            x = x /2;
        }
        else{
            a += "1";
            x = x/2;
        }
    }
    reverse(a.begin(),a.end());
    int b = stoi(a);
    cout << b << endl;

}
int main(){

    int x;
    cin>>x;
    DecimalToBinary(x);

}