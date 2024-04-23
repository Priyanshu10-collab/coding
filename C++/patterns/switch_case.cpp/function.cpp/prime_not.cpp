#include<iostream>
using namespace std;
void isprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            cout<<"it is not a prime"<<endl;
            break;}
            else{
                cout<<"it is prime number"<<endl;
                break;
            }
        
    }
}
int main()
{
 int a;
 cout<<"enter the value of a"<<endl;
 cin>>a;
 isprime(a);
 
 return 0;
}