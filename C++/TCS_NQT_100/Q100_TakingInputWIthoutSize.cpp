#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    vector<int>arr;

    // int num;
    // // if spaces separate the numbers
    // while(ss>>num){
    //     arr.push_back(num);
    // }

    //if comma separate the numbers
    string temp;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }

    for(auto a : arr){
        cout<<a<<" ";
    }

    return 0;

}