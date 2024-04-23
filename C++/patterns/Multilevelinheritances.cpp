#include<iostream>
using namespace std;
class Animals{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog: public Animals{

};
class GermanSerphad: public Dog{

}; 
int main()
{
    GermanSerphad q;
    q.speak();

 return 0;
}