#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());

    stringstream ss(s);
    string temp;
    vector<int>a;

    while(getline(ss,temp,',')){
        a.push_back(stoi(temp));
    }

    for(auto i : a){
        cout<<i<<" ";
    }

}

