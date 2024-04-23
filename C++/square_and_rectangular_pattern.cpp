#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int j = 0;
        while(j<=n*n*2){
            cout<<"*"<<endl;
            j = j+2;
        }
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        int number = n - 1;
        while(number){
            cout<<number;
            number = number - 1;
        }
        cout<<endl;
        



        }

    }
