#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<int>a(6);
    a = {1,2,2,1,1,3};
    unordered_map<int,int>ab;
    for(int i = 0; i < 6; i++){
        ab[a[i]]++;
    }

    for(auto i: ab){
        if(i.second == 1){
            cout<<i.first;
        }
        else{
            continue;
        }
    }
}

