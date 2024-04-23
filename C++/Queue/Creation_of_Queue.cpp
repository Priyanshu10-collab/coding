#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>s;

    s.push(11);
    s.push(15);
    s.push(23);

    cout<<"size of queue is: "<<s.size()<<endl;

    s.pop();
    s.pop();
    s.pop();

    cout<<"size of queue is:  "<<s.size()<<endl;

    if(s.empty()){
        cout<<"Queue is empty";
    }else{
        cout<<"Queue is not empty";
    }
 return 0;
}