#include<bits/stdc++.h>
using namespace std;

float greatest(float a, float b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    float a, b;
    cin >> a >> b;
    cout<< greatest(a,b);

}