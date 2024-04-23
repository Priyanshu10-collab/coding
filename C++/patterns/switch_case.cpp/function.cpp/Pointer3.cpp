#include<iostream>
using namespace std;

void update(int **p){
   //p = p+1;
    //kuch change hoga- no

    //*p = *p +1;
    //kuch change hoga - yes

    **p = **p +1;
    //kuch change hoga - yes
}
int main()
{/**
    int i = 5;
    int *ptr =&i;
    int **ptr2 = &ptr;

    //cout<<endl<<"printing p "<<*ptr<<endl;
    //cout<<"address of ptr"<<&ptr2<<endl;
     //cout<<"address of ptr"<<ptr2<<endl;
      //cout<<"address of ptr"<<&ptr2<<endl;
       //cout<<"address of ptr"<<&ptr<<endl;
        //cout<<"address of ptr"<<ptr<<endl;
 cout<<"before "<<i<<endl;
  cout<<"before"<<ptr<<endl;
  cout<<"before"<<ptr2<<endl;
  update(ptr2);
  cout<<endl;
  cout<<"after "<<i<<endl;
  cout<<"after"<<ptr<<endl;
  cout<<"after"<<ptr2<<endl;
  /**/
  int first = 0;
  int *p = &first;
  //int *q = p;
  //(*q)++;
  cout<<(*p)++<<" ";
 cout<<first<<endl;


 return 0;
}