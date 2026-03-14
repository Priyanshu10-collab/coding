#include<bits/stdc++.h>
using namespace std;

int countSundays(string a, int days){
    unordered_map<string,int> mp = {
        {"Sunday",0},
        {"Monday",6},
        {"Tuesday",5},
        {"Wednesday",4},
        {"Thursday",3},
        {"Friday",2},
        {"Saturday",1}
    };

    int count = 0;

    if(days >= mp[a])
        count = (days - mp[a]) / 7 + 1;

    return count;
}

int main(){
    string a;
    cin >> a;

    int days;
    cin >> days;

    cout << countSundays(a,days);
}