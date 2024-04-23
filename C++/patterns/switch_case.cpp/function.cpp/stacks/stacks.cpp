#include<iostream>
// #include<stack>
using namespace std;

class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //Behaviour
    stack(int size){
        this->size=size;
        arr = new int(size);
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }

    int peak(){
        if(top >= 0 && top < size)
        return arr[top];

        else{
            cout<<"stack is Empty "<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{

    stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<< st.peak() <<endl;

    st.pop();

    cout<<st.peak() <<endl;

    st.push(80);
    cout<<st.isEmpty()<<endl;
    cout<<st.peak()<<endl;
    // //creations of stacks
    // stack<int>s;

    // //inserting an element
    // s.push(2);
    // s.push(8);
    // s.push(9);
    // s.push(7);
    
    // //removing an element
    // s.pop();

    // cout<<"Printing top element "<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"The stack is empty "<<endl;
    // }
    // else{
    //     cout<<"The stack is not empty"<<endl; 
    // }
    
    // cout<<"Size of the stack is:- "<<s.size()<<endl;

    // return 0;


}