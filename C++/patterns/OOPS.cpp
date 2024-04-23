/**#include<iostream>
using namespace std;
class Hero{
      //properties
private:
      int health;
public:
    char *name;
      char level;

   Hero(){
    cout<<"Name: "<<this->name<<" ,";
    cout<<"health: "<<this->health<<" ,";
    cout<<"level:  "<<this->level <<" }";
    cout<<endl<<endl; 
    //name = new char(100);
   }
//Parameterised constructor
Hero(int Health,char Level){
    cout<<"this -> "<<this<<endl;
    this->level=level;
    this->health = health;
}
//copy constructor
Hero(Hero &temp){
    cout<<"Copy constructure caled"<<endl;
    this->health = temp.health; 
    this->level = temp.level;
}
void print(){
    cout<<"health:- "<<this->health<<endl;
    cout<<"level:-  "<<this->level << endl;
}
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health = h;
}
void setLevel(char ch){
    level = ch;
}
void setName(char name[]){
(this->name,name);}


};
int main()
{
    Hero 1;
    Hero.setHealth(12);
    Hero1.setLevel('D');
    char name[7] = "babbar";
    hero1.setName(name);
    //Hero suresh(70,'A');
    //suresh.print();
    //copy constructor
    //Hero ritesh(suresh);
    //ritesh.print();
       //object created statically
   /* Hero Ramesh;
    cout<<"Adress of ramesh "<<&Ramesh<<endl;
    Ramesh.getHealth();
    
    //dynamicaly
    Hero *h = new Hero;
    h->print();

    Hero temp(22,'B');
    temp.print();

    //dynamically
   // Hero *h = new Hero();
          //static allocation
    /*** Hero a;
    a.setHealth(80);
    a.setLevel('B');
     cout<<" Level is "<<a.level<<endl;
     cout<<" health is "<<a.getHealth()<<endl;

     
     //dynamic allocation
     Hero *h = new Hero;
     h->setHealth(70);
     h->setLevel('A');
     cout<<" Level is "<<(*h).level<<endl;
     cout<<" health is "<<(*h).getHealth()<<endl;
    //By using  arrows
     cout<<" Level is "<<h->level<<endl;
     cout<<" health is "<<h->getHealth()<<endl;
***/

    //creation of object
    //Hero Ramesh;
    //cout<<"Ramesh health is "<< Ramesh.getHealth()<<endl;
    //use setHealth
    //Ramesh.setHealth(80);
    //Ramesh.health = 70;
    //Ramesh.level = 'A';

    //cout<<"Health  is:-  "<<Ramesh.getHealth()<<endl;
    //cout<<"Level is :-   "<<Ramesh.level<<endl;


    //