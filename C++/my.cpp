#include<iostream>
using namespace std;

void selectionSort(int *arr, int size){
    for(int i = 0 ; i < size-1 ; i++){
        int minIndex = i;
        for(int j = i+1 ; j < size ; j++){
            if(arr[j] < arr[minIndex]){
                swap(arr[minIndex],arr[j]);
            }
        }
    }
}

void insertionSort(int *arr, int size){

    for(int i = 1 ; i< size ; i++){
        int temp = arr[i];
        int j = i -1;

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main()
{

    int a[10] = {5,4,5,6,7,2,9,8,3,1};
    //selectionSort(a,10);
    insertionSort(a,10);
    int i = 0;
    while(i<=10){
        cout<<a[i]<<" ";
        i++;
    }

 return 0;
}