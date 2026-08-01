#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int position = 1;
    int bitmask = 1<<position;

    int newNumber = n | bitmask;

    cout<<newNumber;
}