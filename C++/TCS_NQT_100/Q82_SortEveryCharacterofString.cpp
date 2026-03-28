#include<bits/stdc++.h>
using namespace std;

void SortString(string &res){
    int n = res.length();
 // Approach  1
    // for(int i = 0; i < n ; i++){
    //     for(int j = 0; j < n -1; j++){
    //         if(res[j] > res[j+1]){
    //             swap(res[j],res[j+1]);
    //         }
    //     }
    // }

    //Approach 2
    sort(res.begin(),res.end());
}
int main(){

    string str = "geeksforgeeks";
    SortString(str);
    cout<<str;

}
