#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5 ;
    int position = 2;
    int bitmask = 1<<position;

    int newBitmask = ~(bitmask);
    int newNumber = n & newBitmask;

    cout<<newNumber<<endl;
}