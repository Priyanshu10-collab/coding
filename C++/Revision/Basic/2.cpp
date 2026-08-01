#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a(5);
    a = {1,3,4,2,2};

    unordered_map<int,int>ab;
    for(int i = 0; i < 5; i++){
        ab[a[i]]++;
    }

    for(auto c : ab){
        if(c.second > 1){
            cout<<c.first;
        }
    }

    
}