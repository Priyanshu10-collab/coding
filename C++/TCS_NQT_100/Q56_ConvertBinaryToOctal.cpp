#include<bits/stdc++.h>
using namespace std;

int ConvertBinaryToOctal(int n){
    int sum = 0;
    string a = to_string(n);
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++){
        if(a[i] == '1'){
            sum += pow(8,i);
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<ConvertBinaryToOctal(n);

}