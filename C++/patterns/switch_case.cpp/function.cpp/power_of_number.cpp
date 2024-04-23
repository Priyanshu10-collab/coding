#include<iostream>
#include<math.h>
using namespace std;
void power(int x,int y){
      int ans = pow(x,y);
      cout<<ans<<endl;
      
    
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;

    power(a,b);
    

 return 0;
}