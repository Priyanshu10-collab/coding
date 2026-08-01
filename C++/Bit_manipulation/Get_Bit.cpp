#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int position = 2;
    int  bitmask = 1<<position;

    if((n & bitmask) == 0){
        cout<<"Bit is Zero"<<endl;
    }else{
        cout<<"Bit is One"<<endl;
    }
}