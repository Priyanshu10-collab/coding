#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int> arr){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int secondLargest(vector<int> arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] > largest){
            secondLargest = largest ;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int  i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout<<secondSmallest(arr)<<endl;
    cout<<secondLargest(arr)<<endl;

    
    return 0;
}
