#include<bits/stdc++.h>
using namespace std;
 void reverse(string &a){
    int s = 0;
    int e = a.length()  - 1;

    while(s <= e){
        swap(a[s], a[e]);
        s++;
        e--;
    }
 }
string convert2Binary(int x){
    string res = "";
    while(x > 0){
        if(x%2 == 1){
            res += '1';
        }
        else{ res += '0';}
        x= x/2;
    }
    reverse(res);
    return res;

}
int main()
{
    int x;
    cin>>x;
    cout<<convert2Binary(x)<<endl;
    return 0;
}