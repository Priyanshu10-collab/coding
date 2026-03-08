#include<bits/stdc++.h>
using namespace std;

int factor(int a){
    for(int i = 1 ; i < a ; i++){
        if(a % i == 0){
            cout<<i<<" ";
        }
    }
}
int main(){

    int a ;
    cin >>  a;

    factor(a);

}