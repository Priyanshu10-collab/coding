#include<iostream>
using namespace std;
class Animals{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
class human{
    public:
    string colour;

    public:
     void speaking(){
        cout<<"Speaking"<<endl;
    }
};
//Multiple Inheritances
class Multiple: public Animals, public human{


};
int main()
{
    Multiple obj1;
    obj1.speaking();
    obj1.speak();
    

 return 0;
}