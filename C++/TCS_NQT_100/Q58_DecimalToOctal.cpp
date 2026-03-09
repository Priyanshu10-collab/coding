#include<bits/stdc++.h>
using namespace std;

int decimalToOctal(int n){
    if(n == 0){
        return 0;
    }

    string ans ="";

    while(n > 0){
        int rem = n%8;
        ans += to_string(rem);
        n= n/8;
    }

    reverse(ans.begin(),ans.end());
    int b = stoi(ans);

    return b;
}
int main(){
    int n ;
    cin >> n;

    cout<<decimalToOctal(n)<<endl;

}