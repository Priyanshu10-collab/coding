#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }

    string s = "[";
    for(int i = 0 ; i < n; i++){
        s += to_string(a[i]);

        if(i != a.size() - 1){
            s += ',';
        }
    }
    s += "]";
    cout<<s<<endl;
}