#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

    vector<int>arr;
    int product = INT_MIN;

    string temp;
    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    for(int i = 0 ; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            product = max(product,arr[i]*arr[j]);
        }
    }

    cout<<product;
}