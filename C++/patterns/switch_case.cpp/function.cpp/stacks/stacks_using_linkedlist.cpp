#include<iostream>
using namespace std;
struct node
{
    int val;
    node* next;
};

class mystack{
    node* head;
    int stacksize;

    public:
    mystack(){
        head = NULL;
        stacksize=0;
    }
    void push(int g){
        node* temp = new node();
        temp-> val = g;
        temp->next = head;
        head = temp;

        cout<<"Elements :- "<<g<<"  Push into the Stack!"<<endl;
        stacksize++;
    }
    void pop(){
        node* temp = head;
        head = temp->next;
        temp-> next = NULL;
        delete temp;

        cout<<"Element Popped"<<endl;
        stacksize--;
    }
    int top(){
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        cout<<"Top Element is: "<<head->val<<endl;
        return head->val;
    }
    int size(){
        cout<<"size of stack is:  "<<stacksize<<endl;
        return stacksize;
    }
    int empty(){
        if(head == NULL){
            cout<<"Stack is Empty "<<endl;
            return 1;
        }
        cout<<"Stack is not empty "<<endl;
        return 0;
    }
};
int main()
{
    mystack s;

    s.empty();
    s.push(7);
    s.push(9);
    s.pop();
    s.push(10);
    s.top();
    s.size();
    s.empty();
 return 0;
}