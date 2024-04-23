#include<iostream>
using namespace std;
int AP(int x){
    int AP = 3*x+7;
    return AP;
}
int main()
{ int a;
   cout<<"AP format is (3*x+7)"<<endl;
  cin>>a;
  int ans = AP(a);
  cout<<"answer is = "<<ans<<endl;
 return 0;
}