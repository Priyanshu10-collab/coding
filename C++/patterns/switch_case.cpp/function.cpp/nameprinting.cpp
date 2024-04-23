#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int n;
    cout<<"enter the number you want to print"<<endl;
    cin>>n;
    cout<<"Enter the name :- "<<endl;
    cin>>name[100];
    for(int i=0;i<n;i++){
        cout<<name<<endl;
        i++;
    }
 return 0;
}