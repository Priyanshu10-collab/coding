#include<iostream>
using namespace std;
int score = 15;
void a(int &i){
    cout<<i<<endl;
    
}
void b (int &i){
    cout<<i<<endl;
}
int main()
{
    int i = 3;
    a(i);
    b(i);
 return 0;
}