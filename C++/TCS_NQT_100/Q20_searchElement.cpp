#include<bits/stdc++.h>
using namespace std;

//if array is not in sorted order
int linearSearch(vector<int> nums, int element){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == element){
            return i;
        }
    }
    return -1;
}

// if array is in sorted format

int binarySearch(vector<int> &nums, int element){
    int s = 0 ;
    int e  = nums.size() -1;

    while(s < e){
        int mid = s + (e-s)/2;

        if(nums[mid] == element){
            return mid;
        }

        else if(nums[mid] < element){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
    }

    return -1;
}



int main(){

    int n ;
    cin >> n;

    vector<int>ans(n);

    for(int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    int k;
    cout<< "Enter the number you want to search"<<endl;
    cin >> k; 

    cout<< linearSearch(ans, k) << endl;
    cout<<"BinarySearch : " << binarySearch(ans, k);

}