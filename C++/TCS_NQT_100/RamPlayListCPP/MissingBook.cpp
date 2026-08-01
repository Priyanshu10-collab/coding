#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<int> ans;
    string temp;
    int sum = 0;

    while(getline(ss, temp, ' ')){
        ans.push_back(stoi(temp));
    }

    for(auto i : ans){
        sum += i;
    }

    int missing = (n * (n + 1)) / 2 - sum;

    cout << missing;
}