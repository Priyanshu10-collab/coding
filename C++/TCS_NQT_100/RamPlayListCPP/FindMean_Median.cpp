#include<bits/stdc++.h>
using namespace std;

float mean(vector<int> ans){
    int n = ans.size();
    float sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum += ans[i];
    }

    return sum/n;
}

float median(vector<int> ans){
    int n = ans.size();
    sort(ans.begin(),ans.end());
    if(n % 2 == 1){
        return ans[n/2];
    }
    else if( n % 2 == 0){
        float answer  = ans[n/2] + ans[n/2 - 1];
        return answer/2;
    }
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);

    vector<int>a;
    string temp;

    while(getline(ss,temp,' ')){
        a.push_back(stoi(temp));
    }

    cout<<"Mean: "<<mean(a)<<endl;
    cout<<"Median: "<<median(a);

}