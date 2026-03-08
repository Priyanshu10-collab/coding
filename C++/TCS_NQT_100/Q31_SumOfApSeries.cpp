#include<bits/stdc++.h>
using namespace std;

int SumOfApSeries(int a , int d , int n){
    int sum = n/2*(2*a + (n-1) * d);
    return sum;
}
int main(){
    int a , d , n;
    cin >> a >> d >> n;
    cout << SumOfApSeries(a , d , n);
}