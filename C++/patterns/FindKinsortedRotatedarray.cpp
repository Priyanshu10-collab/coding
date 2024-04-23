#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s =0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    }
    int binarySearch(int array[],int s,int e,int key){
        int start = 0;
        int end = size -1;

        int mid = start + (end - start)/2;

    while(start <= end ){
        
        
        if(array[mid]==key)
        return mid;

        if(key>array[mid])
        start = mid + 1;

        else{
        end = mid -1;
        }
        mid = start + (end-start)/2;
    }
 return -1;
}
int main()
{
    int pivot = getPivot(arr,n);
    if(k >= arr[pivot]&& k <= arr[n-1]){

        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot,n,k);
    }

 return 0;
}