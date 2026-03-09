#include<bits/stdc++.h>
using namespace std;

unordered_map<int,string>mp = {{0,"zero"},{1,"One"},{2,"Two"},{3,"Three"},
{4,"Four"},{5,"Five"},{6,"Six"},{7,"Seven"},{8,"Eight"},{9,"Nine"},
{10,"Ten"},{11,"Eleven"},{12,"Twelve"},{13,"Thirteen"},{14,"Fourteen"},
{15,"Fifteen"},{16,"Sixteen"},{17,"Seventeen"},{18,"Eighteen"},{19,"Nineteen"},
{20,"Twenty"},{30,"Thirty"},{40,"Fourty"},{50,"Fifty"},{60,"Sixty"},{70,"Seventy"},
{80,"Eighty"},{90,"Ninety"},{100,"Hundred"},{1000,"Thousand"},{1000000,"Million"},};


string numberToWord(int n){

    if(n <= 20){
        return mp[n];
    }
    else if(n < 100){
        return mp[(n/10)*10] + " " + mp[n%10];
    }
    else if(n<1000){
        return mp[n/100] + " Hundred" + " "+ numberToWord(n%100);
    }
    else if(n < 1000000){
        return numberToWord(n/1000) + "Thousand" + " " + numberToWord(n%1000);
    }
}

int main(){
    int n;
    cin >> n;
    string ans = numberToWord(n);
    cout << ans;
}