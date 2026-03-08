#include<bits/stdc++.h>
using namespace std;

double roots(int a, int b, int c){
    int D = pow(b,2) - 4*a*c;

    if(D == 0){
        int x = -b / (2*a);
        cout<< x << endl;
    }

    if(D>0){
        int x = (-b + sqrt(D)) / (2*a);
        int y = (-b - sqrt(D)) / (2*a);
        cout<< x << " " << y << endl;
    }

    if(D<0){
        double x = -b / (2*a);
        double y = sqrt(-D) / (2*a);
        cout<< x << " + i" << y << endl;
        cout<< x << " - i" << y << endl;
    }

}
int main(){
    int a , b , c;
    cin >> a >> b >> c;
    roots(a , b , c);

}