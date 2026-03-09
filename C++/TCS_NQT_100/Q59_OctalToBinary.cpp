#include<bits/stdc++.h>
using namespace std;

int convertOctalToDecimal(int n){
    int ans = 0;
    int i = 0;
    while(n>0){
        int rem = n%10;
        ans += rem*pow(8,i);
        i++;
        n = n/10;
    }
    return ans;
}

int convertDecimalToBinary(int n){
    string ans = "";
    while(n > 0){
        if(n%2 == 1){
            ans += "1";
            n = n/2;
        }
        else{
            ans += "0";
            n = n/2;
        }
    }
    reverse(ans.begin(),ans.end());
    int b = stoi(ans);
    return b;
}
int main(){
    int n;
    cin>>n;
    int ans = convertDecimalToBinary(convertOctalToDecimal(n));
    cout<<ans;

}