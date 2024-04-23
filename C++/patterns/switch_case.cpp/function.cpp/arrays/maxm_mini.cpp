#include<iostream>
using namespace std;
int get min(int[],int n){
    int min = INT_MAX;

    for(int i = 0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }
}
    
  

    int get max(int num[],int n){
        int max = INT_MIN;
        for(int i = ;i<n;i++){
            if(num[i]>max){
                max = num[i];
            }
        }
    }

}
int main()
{
    int size;
    cin>>size;
    int num[100];

    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    cout<<"maxm value is "<< get max(num,size)<<endl;
    cout<<"minm value is "<<get min(num,size)<<endl;
 return 0;
