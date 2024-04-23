#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 0;i<=n;i++){
     fact = fact *i;
    }
    return fact;
}
int nCr( int n,int r ){
        int num = factorial(n);
        int deno = factorial(r)*factorial(n-r);

        int ans = num/deno;
        }


int main()
{
    int a,b;
    cout<<"enter the value of N and R"<<endl;
    cin>>a>>b;
    factorial(a);
    factorial(b);
    cout<<"answer is "<<nCr(a,b)<<endl;


 return 0;
}