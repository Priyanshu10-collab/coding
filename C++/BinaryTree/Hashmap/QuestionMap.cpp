#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" memory is free for node with data " << value <<endl; 
    }
};


bool checkcircular(Node* head){
    unordered_map<Node*,bool>vis;
    Node*temp = head;
    
    while(temp != NULL){
        if(vis.find(temp) != vis.end()){
            vis[temp] = true;
        }
        else{
            return true;
        }   temp = temp -> next;
    }
    return false;
    }
int main(){
    string str = "thiruvananthapuram";
    unordered_map<char,int> freq;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch]++;
    }

    for(auto i: freq){
        cout<< i.first << " " <<i.second <<endl;
    }


 return 0;
} 