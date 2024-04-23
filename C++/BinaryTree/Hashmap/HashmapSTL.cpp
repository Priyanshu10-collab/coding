#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    unordered_map<string,int> m;
     
     //insertion
     pair<string, int> p = make_pair("scorpio", 9);
     m.insert(p);

     pair<string,int> p2("alto",2);
     m.insert(p2);

     m["fortuner"] = 10;

     //access
     cout << m.at("alto") << endl;
     cout << m.at("scorpio") << endl;
     cout << m["fortuner"] << endl;

     //search
     cout << m.count("Innova") << endl;
     if(m.find("fortuner") != m.end()){
        cout<<"fortuner Found" << endl;
     }
     else{
        cout<<"fortuner not Found" <<endl;
     }

     cout<<m.size() << endl;
     cout<<m["hummer"] << endl;
     cout<< m.size() << endl;

     //Traversing all ther element

     cout << "printing all entries: "<<endl;

     for(auto i:m){
        cout<<i.first<<" ->  "<<i.second <<endl;
     }

     


 return 0;
}