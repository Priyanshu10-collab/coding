#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<< val <<endl;
    }
};
//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
//gives length of linked list
int getlength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void InsertAtHead(Node* &head,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}
void InsertAtTail(Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
    tail ->next = temp;
    temp ->prev = tail;
    tail = temp;
    }
    
}
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1 && temp != NULL){
        temp = temp->next;
        cnt++;
    }
    //check if the position is valid
    if(temp == NULL){
        cout<<"Invalid Position"<<endl;
        return;
    }
    //insert at tail
      if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
      }
    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next ->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev =temp;
}
void deleteNoode(int position,Node* & head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr =head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main()
{
    Node* node1 =  new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<< getlength(head) <<endl;

    InsertAtHead(head,8);
    print(head);

    InsertAtHead(head,10);
    print(head);

    InsertAtHead(head,11);
    print(head);

    InsertAtTail(tail,25);
    print(head);

    InsertAtPosition(tail,head,2,100);
    print(head);
 return 0;
}