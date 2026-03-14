#include<bits/stdc++.h>
using namespace std;
int minOperation(int p ,int q,int r){
    if(p == q && q == r){
        return 0;
    }

    vector<int>arr = {p,q,r};
    sort(arr.begin(),arr.end());
    int step = 0;

    while(true){
        arr[0] += 1;
        arr[1] += 1;
        arr[2] -= 1;

        if(arr[0] == arr[1] && arr[1] == arr[2]){
            step++;
            return step;
        }



        sort(arr.begin(),arr.end());

        if(arr[0] == arr[1] && arr[1] + 1 == arr[2] ||
        arr[1] == arr[2] && arr[2] + 1 == arr[0]){
            return -1;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
    int p,q,r;
    cin>>p>>q>>r;
    int ans = minOperation(p,q,r);
    cout<<ans<<endl;
    }
    return 0;

}