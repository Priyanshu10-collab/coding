#include<iostream>
using namespace std;
void print(int arr[],int n ,int start = 0){
    for(int i = start;i<n;i++){
        cout<<arr[i]<<endl;;
    }
}
int main()
{
    int  arr[5] = {1,4,7,8,9};
    int size = 5;
    print(arr,5,0);
    cout<<endl;
    print(arr,5,2);
    cout<<endl;
 return 0;
}