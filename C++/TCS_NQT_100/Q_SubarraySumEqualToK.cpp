#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subArraySumEqualToK(vector<int> &ans,int k){
    int n = ans.size();
    vector<vector<int>> result;

    for(int i = 0; i < n ; i++){
        for(int j = i + 1; j < n ; j++){
            if(ans[i] + ans[j] == k){
                result.push_back({i,j});
            }
        }
    }

    return result;
}

int main(){

}