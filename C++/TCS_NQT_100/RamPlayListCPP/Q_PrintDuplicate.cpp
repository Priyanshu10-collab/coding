#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

    unordered_map<int,int>ab;
    vector<int>a;
    string temp;
    while(getline(ss,temp,' ')){
        a.push_back(stoi(temp));
    }

    for(auto b : a){
        ab[b]++;
    }

    for(auto i : ab){
        if(i.second > 1){
            cout<<i.first<<" ";
        }
    }
}