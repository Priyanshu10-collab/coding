#include<bits/stdc++.h>
using namespace std;

int main(){
    int operation;
    cin>>operation;
    int n  = 5 ;
    int position = 1;
    int bitmask = 1<<position;


    if(operation == 1){
        int newNumber = n | bitmask;
        cout<<newNumber;
    }else{
        int newbitmask = ~(bitmask);
        int newNumber = n & newbitmask;
    }

}