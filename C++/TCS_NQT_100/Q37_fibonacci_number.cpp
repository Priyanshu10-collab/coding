#include<bits/stdc++.h>
using namespace std;

int fibonacci(int m){
    if( m <= 1){
        return m;
    }

    int last = fibonacci(m-1);
    int slast = fibonacci(m-2);

    return last+slast;
}

int main(){

    int n;
    cin>>n;
    
    cout<<fibonacci(n) <<endl;

}