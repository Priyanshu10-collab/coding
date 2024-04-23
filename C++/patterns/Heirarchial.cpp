#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Inside function 1"<<endl;
    }
};
class B:public A{
    public:
    void func(){
        cout<<"Inside function 2"<<endl;
    }
};
class C:public A{
    public:
    void func(){
        cout<<"Inside Function 3"<<endl;
    }
};
int main(){
    A object1;
    object1.A::func();

    B object2;
    object2.A::func();
    object2.B::func();

    C object3;
    object3.A::func();
    //object3.func2();
    object3.C::func();
 return 0;
}