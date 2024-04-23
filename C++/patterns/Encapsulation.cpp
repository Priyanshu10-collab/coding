#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age; 
    }

};
int main()
{
    Student First;

    cout<<"Sab thik hai"<<endl;
 return 0;
}