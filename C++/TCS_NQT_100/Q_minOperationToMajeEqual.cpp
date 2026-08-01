#include<bits/stdc++.h>
using namespace std;

int minOperation(int a,int b, int c){
    if(a == b && a == c){
        return 0;
    }
    
    vector<int>ab = {a,b,c};
    int step = 0;
    
    while(step <= 1e6){
        sort(ab.begin(),ab.end());
        
        ab[0] += 1;
        ab[1] += 1;
        ab[2] -= 1;
        step++;
        
        if(ab[0] == ab[1] && ab[1] == ab[2]){

            return step;
        }
        
        if((ab[0] == ab[1] && ab[1] + 1 == ab[2]) || (ab[1] == ab[2] && ab[2] + 1 == ab[0])){
            return -1;
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,r;
        cin>>p>>q>>r;
        int ans = minOperation(p,q,r);
        cout<<ans<<" ";
    }
}