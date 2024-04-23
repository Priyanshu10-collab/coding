#include<iostream>
using namespace std;
void printf(int *p){
    cout<<*p<<endl;

}
 void update(int *p){
     //p = p + 1;
     cout<<"inside "<<*p<<endl;
     *p = *p +1;

 }
int  getSum(int *arr,int n){

    cout<<"size : "<<sizeof(arr)<<endl;

    int sum =0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{/***
    int value = 5;
    int *p = &value;

    printf(p);
    
  cout<<" before "<<p<<endl;
  update(p);
  cout<<" after "<<p<<endl;

  int arr[6]= {1,2,3,4,5,6};
/***/
int arr[6]= {1,2,3,4,5,8};
  cout<<"sum is " <<getSum(arr+3,3)<<endl;

  return 0;
}