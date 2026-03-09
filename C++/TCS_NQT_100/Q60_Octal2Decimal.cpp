#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
    int ans = 0;
    int i = 0;
    while(n>0){
        int rem = n % 10;
        ans += rem*pow(8,i);
        i++;
        n = n/10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = octalToDecimal(n);
    cout << ans;

}