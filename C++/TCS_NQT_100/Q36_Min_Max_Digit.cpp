#include<bits/stdc++.h>
using namespace std;

void minMaxDigit(int x){
    int min = 9;
    int max = 0;

    while(x > 0){
        int rem = x % 10;

        if(rem < min){
            min = rem ;
        }
        if(rem > max){
            max = rem;
        }
        x = x / 10;
    }

    cout << min << " " << max;
}
int main(){
    int x;
    cin >> x;

    minMaxDigit(x);
}