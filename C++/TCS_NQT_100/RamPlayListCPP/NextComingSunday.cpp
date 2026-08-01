#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string ,int> ab = {{"Mon",6},{"Tues",5},{"Wed",4},{"Thru",3},{"Fri",2},{"Sat",1},{"sun",0}};

    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<ab[s]+n/7 + 1;
}
