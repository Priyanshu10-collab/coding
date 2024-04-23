#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int n;
  cin>>n;
  int i = 0, ans = 0;
  while(n<=i){
    int digit = n%10;
    if(digit==1){
        ans = (ans*10)+digit;
    }
    n = n/10;
    i++;
  }
  cout<<ans<<endl;
 return 0;
}