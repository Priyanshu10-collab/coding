#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> a, vector<int> b){
    int m = a.size();
    int n = b.size();

    for(int  i = 0 ; i < n ; i++){
        bool present = false;

        for(int j = 0 ; j < m ; j++){
            if (b[i] == a[j]){
                present = true;
                break;
            }
        }

        if(present == false)
        return false;
    }
    return true;

    
}
int main(){

    vector<int>a = {1,2,3,4,5};
    vector<int>b = {1,3,4,5,6,7,7,4,2};

    cout<<isSubset(b,a);

    return 0;

}