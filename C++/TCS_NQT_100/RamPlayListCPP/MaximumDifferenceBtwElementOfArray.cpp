#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

    vector<int>a;
    string c;

    while(getline(ss,c,',')){
        a.push_back(stoi(c));
    }

    int maxDiff = INT_MIN;

    for(int i = 1; i < a.size(); i++){
        int diff = a[i] - a[i-1];
        maxDiff = max(maxDiff, diff);
    }

    cout << maxDiff;
}