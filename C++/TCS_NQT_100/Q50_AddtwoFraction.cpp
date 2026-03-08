#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void addFraction(int num1,int den1,int num2,int den2){
    int lcm = den1*den2/ gcd(den1,den2);
    int newNum1 = num1 * (lcm/den1);
    int newNum2 = num2 * (lcm/den2);

    int sum  = newNum1 + newNum2;
    int g = gcd(sum,lcm);
    cout << sum/g << "/" << lcm/g;
}

int main(){
    int num1,den1,num2,den2;
    cin>>num1>>den1>>num2>>den2;
    addFraction(num1,den1,num2,den2);
}