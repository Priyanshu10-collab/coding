#include<bits/stdc++.h>
using namespace std;

float sumOfGpSeries(float a , float r , int n){
    float sum = a * (pow(r,n) - 1) / (r - 1);
    return sum;
}

int main(){
    float a,r;
    int n;
    cin >> a >> r >> n;
    cout << sumOfGpSeries(a,r,n);
}