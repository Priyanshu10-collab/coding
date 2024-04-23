#include<iostream>
using namespace std;
int main()
{
    //int *p = 0;
    //cout<<*p<<endl;
    /**
    int i = 5;
    int *p = &i;

    cout<<p<<endl;
    cout<< *p <<endl;
    /**/
  int num = 5;
  int a = num;
  a++;

  cout<< num<<endl;

  int *p  =&num;
int  *q = p;
cout<<*q<<endl;
  cout<<" before "<<num<<endl;
  (*p)++;
  cout<<"after"<< num <<endl;

//important conceppt
int i = 3;
int *t = &i;
cout<< (*t)++<<endl;
cout<<*t<<endl;
    
 
 return 0;
}