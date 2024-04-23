#include<iostream>
using namespace std;
int main()
{
    int a = 16;
    int b = 8;
    cout<<"Before swapping the value of a is: "<<a<<endl;
    cout<<"Before swapping the value of b is: "<<b<<endl;

//   1st method of swapping without 3rd integer
    a = a+b;
    b = a-b;
    a = a-b;

//   2nd method of swappinng without 3rd integer

    //  a = a*b;
    // b = a/b;
    // a = a/b;

//  3rd method of swapping the number without using 3rd integer
    //  a = a^b;
    //  b = a^b;
    //  a = a^b; 

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
 return 0;
}