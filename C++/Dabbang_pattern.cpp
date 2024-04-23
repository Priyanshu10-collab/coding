#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int row = 1;
    while(row<=number){
        int first = number - row + 1;
        int count = 1;
        while(first){
            cout<<count;
            count++;
            first--;
        }
        int halfleftstar = row - 1;
        while(halfleftstar){
            cout<<"*";
            halfleftstar--;
        }
        int stars2 = row - 1;
        while(stars2){
            cout<<"*";
            stars2--;
        }
        int tri2 = number - row +1;
        while(tri2){
            cout<<tri2;
            tri2--;
        }
        cout<<endl;
        row++;
    }
 return 0;
}