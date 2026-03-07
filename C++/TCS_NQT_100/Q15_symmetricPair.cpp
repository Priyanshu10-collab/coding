#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[5][2] = {{1,2}, {2,1},{3,4}, {4,5}, {5,4}};

    unordered_map<int,int>mp;

    for(int i = 0 ; i < n ; i++){

        int a = arr[i][0];
        int b = arr[i][1];

        if(mp[b] == a){
            cout <<"(" << a << " " << b << ")"; 
        }

        mp[a] = b;

    }
}