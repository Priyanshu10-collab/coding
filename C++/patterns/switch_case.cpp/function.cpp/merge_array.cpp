#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int arr3[]){
int i = 0,j=0;
int k = 0;
while(i<n && j<n){
    if(arr1[i]<arr2[j]){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    else{
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
while(i<n){
    arr3[k] = arr1[i];
    k++;
    i++;
}
while(j<n){
    arr3[k] = arr2[j];
    k++;
    j++;
}
void print(int ans[]){
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
}
int main()
{
 return 0;
}