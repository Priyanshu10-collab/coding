#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int s , int e){
    while(s < e){
        swap(arr[s], arr[e]);
        s++, e--;
    }
}


int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int  i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr, n/2, n-1);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}