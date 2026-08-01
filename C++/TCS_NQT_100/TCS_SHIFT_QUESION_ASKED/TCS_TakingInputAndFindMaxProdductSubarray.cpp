#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<int>a;
    string ab;
    stringstream ss(s);

    int ans = INT_MIN;

    while(getline(ss,ab,' ')){
        a.push_back(stoi(ab));
    }

    for(int  i = 0 ; i < a.size(); i++){
        int product = 1;
        for(int j = i ; j < a.size(); j++){
            product = product * a[j];
            ans = max(ans,product);
        }
    }

    cout<<ans;
}
