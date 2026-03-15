#include<bits/stdc++.h>
using namespace std;

void findCharacter(string s){
    if(s.empty() || s.size() <=2){
        cout<<"Invalid Input"<<endl;
        return;
    }

    unordered_map<char,int> freq;
    unordered_map<char,int> index;

    for(int i = 0 ; i < s.length() ; i++){
        freq[s[i]]++;
        if(index.find(s[i]) == index.end()){
            index[s[i]] = i;
        }
    }

    //finding first non  repeating Character
    char firstNonRepeat = '\0';
    bool hasNonRepeat = false;

    for(int i = 0 ; i < s.length() ; i++){
        char c=s[i];

        if(freq[c] == 1){
            firstNonRepeat = c;
            hasNonRepeat = true;
            break;
        }
    }

    //finding most repeating character
    char mostRepeat = '\0';
    int maxFreq = 0;

    for(auto &it : freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
        }
    }

}
int main(){

}