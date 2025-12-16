#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string x){
    int len = x.length(), p = 1 , num = 0;
    for(int i = x.length() - 1 ; i >= 0 ; i--){
        if(x[i] == '1'){
            num = num + p;
        }
        34 
         p = p * 2;
    }
    return num;
}
int main()
{
    string x;
    cin>>x;
    cout<<binaryToDecimal(x)<<endl;
    return 0;
}