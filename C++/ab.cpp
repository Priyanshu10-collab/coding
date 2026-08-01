#include<bits/stdc++.h>
using namespace std;

// int partition(vector<int>&b, int start, int end){
//     int index = start -1;
//     int pivotElement = b[end];

//     for(int i = start; i < end; i++){
//         if(b[i]< pivotElement){
//             index++;
//             swap(b[index],b[i]);
//         }
//     }

//     index++;
//     swap(b[index],b[end]);
//     return index;
// }

// void quickSort(vector<int> &a,int start , int end){
//     //base case
//     if(start >= end){
//         return;
//     }

//     int pivotIndex = partition(a,start,end);

//     quickSort(a,start,pivotIndex -1);
//     quickSort(a,pivotIndex+1,end);
// }


int merge(vector<int> &b, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex= s;
    for(int i = 0 ; i < len1; i++){
        first[i] = b[s+i];
    }

        mainArrayIndex = mid+1;
    for(int i = 0 ; i < len2; i++){
        second[i] = b[mid+1+i];
    }

    int index1 =0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            b[mainArrayIndex++] = first[index1++];
        }else{
            b[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        b[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        b[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

}
void mergeSort(vector<int> &a, int start, int end){
    if(start >= end){
        return;
    }


    int mid = start + (end-start) /2;

    //left half
    mergeSort(a,start, mid);
    //right half
    mergeSort(a,mid+1,end);

    merge(a,start,end);
}
int main(){
    vector<int>a ={14,12,25,9,8};

    mergeSort(a,0,5);

    for(auto i : a){
        cout<<i<<" ";
    }
}