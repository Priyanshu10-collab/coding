#include<bits/stdc++.h>
using namespace std;

vector<int> insertBegining(vector<int> ans, int n){
    ans.insert(ans.begin(), n);
    return ans;
}

vector<int> insertEnd(vector<int> ans, int n){
    ans.push_back(n);
    return ans;
}

vector<int> insertPosition(vector<int> ans, int n, int pos){
    ans.insert(ans.begin() + pos, n);
    return ans;
}

int main (){
    int n;
    cin >> n;


    vector<int> ans(n);

    for(int i = 0 ; i < n ; i++){
        cin >> ans[i];
    }

    int start, end, pos;
    cout<<"Enter start , end and position : ";
    cin >> start >> end >> pos;

    ans = insertBegining(ans, start);
    ans = insertEnd(ans, end);
    ans = insertPosition(ans, pos, start);

    for(auto a : ans){
        cout<<a<<" ";
    }




}