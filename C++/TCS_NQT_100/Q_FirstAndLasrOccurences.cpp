#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr,int x){
    int s = 0;
    int e = arr.size() -1;
    int first = -1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(arr[mid] == x){
            first = mid;
            e = mid -1;
        }
        else if(arr[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }
    return first;
}

int lastOccurences(vector<int> &arr, int x){
    int s = 0;
    int e = arr.size();

    int last = -1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid] == x){
            last = mid ;
            s = mid  + 1;
        }
        if(arr[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return last;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>ans(n);

    for(int i = 0 ; i < n; i++){
        cin>>ans[i];
    }

    int a = firstOccurence(ans,x);
    int b = lastOccurences(ans,x);

    cout<<a<<" "<<b;

}