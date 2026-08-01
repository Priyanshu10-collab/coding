#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&ans, int start,int end){
    int index = start-1;
    int pivot = ans[end];
    
    
    for(int j = start ; j < end; j++){
        if(ans[j] <= pivot){
            index++;
            swap(ans[index],ans[j]);
        }
    }
    
    index++;
    swap(ans[index],ans[end]);
    return index;
}

void QuickSort(vector<int> &a, int start, int end){
    if(start >= end){
        return;
    }
    
    int pivotIndex = partition(a,start,end);
    
    //left half
    QuickSort(a,start,pivotIndex-1);
    
    //right half
    QuickSort(a,pivotIndex+1,end);
}

int main() {
	// your code goes here
	
	vector<int>a = {12,31,35,8,32,17};
	QuickSort(a,0,a.size()-1);
	
	for(int val : a){
	    cout<<val<<" ";
	}
	
	cout<<endl;
	

}
