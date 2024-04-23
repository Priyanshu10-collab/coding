#include<iostream>
using namespace std;
int main()
{
    int arr[10] ={2,4,6,5};
/***
    cout<<"Adress of the first block of array is ->  "<<arr<<endl;
    cout<<arr[0]<<endl;
     cout<<"Adress of the first block of array is ->  "<<&arr[0]<<endl;

     cout<<" 1 position value of arr is "<<*arr<<endl;
     cout<<" 1 position value of arr is with increament of 1 "<<*arr+1<<endl;
     cout<<" 2 position value of arr is "<<*(arr+1)<<endl;
     cout<<" 3 position value of arr is "<<*(arr+2)<<endl;
     cout<<" 4 position value of arr is "<<*(arr+3)<<endl;
     cout<<" 4 position adress of arr is "<<&arr+4<<endl;

     int i = 3;
     cout<<i[arr]<<endl;

   
   int temp[10] = {1,2,3};
   cout<<sizeof(temp)<<endl;
   cout<<"1st"<< sizeof(*temp)<<endl;
   cout<<"2nd"<< sizeof(&temp)<<endl;


   int *ptr = &temp[0];
   cout<< sizeof(ptr) <<endl;
   cout<<sizeof(*ptr) <<endl;
    cout<<sizeof(&ptr) <<endl;
    
    int a[20] ={1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int*p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
/**/
   //int arr[10];
   int *ptr= &arr[0];
   cout<<ptr<<endl;
   ptr = ptr+1;
   cout<<ptr<<endl; 


 return 0;
}