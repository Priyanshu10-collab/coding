#include<iostream>
using namespace std;
void print(int arr[],int s,int e){

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout <<endl;
}

bool Binarysearch(int *arr,int s,int e,int k)
{  cout<<endl;
    print(arr,s,e);
    //base case
    //element not found
    if(s>e)
    return -1;
    int mid = s + (e-s)/2;
    //element found
    if(arr[mid]==k)
    return true;
    

    if(arr[mid]<k){
        return Binarysearch(arr,mid+1,e,k);
    }
    else{
        return Binarysearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 16;
   cout <<"Present or not" <<Binarysearch(arr,0,5,key) <<endl;
 return 0;
}