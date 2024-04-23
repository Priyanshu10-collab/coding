#include<iostream>
using namespace std;
int fibonacci(int n){
    int a = 0;
    int b = 1;
    for(int i = 2;i<n;i++){
        int next = a+b;
        a = b;
        b = next;
    }
    return b;
}
int main()
{
int a;
cin>>a;

cout<<"The"<<a<<"th term of the series is = "<<fibonacci(a)<<endl;
 return 0;
}