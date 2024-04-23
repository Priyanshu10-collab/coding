#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size, int key ){
    int start = 0;
    int end = size -1;

    int mid = start -(start - end)/2;

    while(start <= end) {
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
        mid =  start -(start - end)/2;
    } 
    return -1;
}
int main()
{
  int even[6] = {2,4,6,8,12,16};
  int odd[5]  = {3,8,11,14,16};

  int evenindex = Binarysearch(even,6,12);

  cout<<" index of 12 is : "<<evenindex<<endl;

  int oddindex = Binarysearch(odd,5,20);

  cout<<" index of 20 is : "<<oddindex<<endl;
 return 0;
}