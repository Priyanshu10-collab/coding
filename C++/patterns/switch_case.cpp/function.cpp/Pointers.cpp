#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<<num<<endl;

 // address of Operator - &
   double d = 4.6;
   double *ptr = &d;
  cout<<" Adress of the num :- "<<&num<<endl;
  cout<<" Adress of the d :- "<<&ptr<<endl;

  int *pte = &num;
  cout<<pte;

  cout<<" size of integer is :- "<<sizeof(num)<<endl;
  cout<<" size of double is :- "<<sizeof(d)<<endl;
  cout<<" size of pointer is :- "<<sizeof(ptr)<<endl;

 return 0;
}