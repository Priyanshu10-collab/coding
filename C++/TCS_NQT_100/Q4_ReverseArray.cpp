#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr){
    int s = 0;
    int e = arr.size() -1;

    while(s < e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}
int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    reverseArray(arr);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

}