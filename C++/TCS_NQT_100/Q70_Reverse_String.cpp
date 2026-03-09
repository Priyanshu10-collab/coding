    #include<bits/stdc++.h>
    using namespace std;

    string reverseString(string s){
        string res = "";
        string word = "";
        for(int i = s.length() - 1; i >= 0 ; i--){
            if(s[i] == ' '){
                res += word + " ";
                word = "";
            }
            word += s[i];
        }
        return res+word; 
    }

    int main(){
        string s;
        getline(cin,s);
        cout<<reverseString(s);
    }
