#include<bits/stdc++.h>
using namespace std;

string changeLexigraphicalOrder(string a){
    int n = a.length();

    for(int i = 0; i < n ; i++){
        int ascii = int (a[i]);

        if(ascii == 122){
            a[i] = char(97);
        }
        else if(ascii == 90){
            a[i] = char(65);
        }
        else if( (ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)){
            a[i] = char(ascii + 1);
        }
    }
    return a;
}

int main(){
    string ans;
    cin>>ans;
    cout<<changeLexigraphicalOrder(ans);

}