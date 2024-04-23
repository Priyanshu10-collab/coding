#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Priyanshu Pandey"<<endl;
    }
    int sayHello(string name,int n){ 
        cout<<"Hello Priyanshu Pandey"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Hello Priyanshu Pandey"<<endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();

 return 0;
}