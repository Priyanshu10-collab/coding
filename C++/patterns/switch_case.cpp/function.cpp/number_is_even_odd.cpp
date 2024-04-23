#include<iostream>
using namespace std;
int iseven(int x){
    if(x%2==0){
        cout<<"it is even"<<endl;
    }
    else{
        cout<<"it is odd "<<endl;
    }
}
int main()
{
    int a;
    cout<<"enter the value of number"<<endl;
    cin>>a;

    iseven(a);
    
 return 0;
}