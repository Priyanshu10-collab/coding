#include<iostream>
using namespace std;
int main()
{ 
int amount;
cout<<"enter the amount in rupee"<<endl;
cin>>amount;
int RS100,RS50,RS20,RS1;
switch(1){
        case 1:RS100 = amount/100;
        amount = amount%100;
        cout<<"no of 100 rupee = "<<RS100<<endl;
        case 2:RS50 = amount/50;
        amount = amount%50;
        cout<<"no of 50 rupee = "<<RS50<<endl;
        case 3: RS20 = amount/20;
        amount = amount%20;
        cout<<"no of 20 rupee = "<<RS20<<endl;
        case 4:RS1 = amount/1;
        amount = amount%1;
        cout<<"no of 1 rupee = "<<RS1<<endl; 
}
 return 0;
}