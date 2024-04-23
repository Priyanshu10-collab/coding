#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack <int> s1,s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if (s2.empty() && s1.empty()){
            cout<<"Queue is  Empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Popped element : " << q.pop() << endl;
    cout << "Popped element : " << q.pop() << endl;
    cout << "Popped element : " << q.pop() << endl;
    cout << "Popped element : " << q.pop() << endl;
    cout << "Popped element : " << q.pop() << endl;

    
 return 0;
}