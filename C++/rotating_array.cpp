#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    int k = 2;
    k = k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.end()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

   //int array[] ={1,2,3,4,5};
   // int n=5;
    //int k;
   // cout<<"enter the rotating number : "<<endl;
   // cin>>k;

   // k=k%n;

    //int ansarray[5];
    //int j= 0;

   // for(int i=n-k;i<n;i++){
       //ansarray[j++]=array[i];
   // }
    //for(int i =0;i<=k;i++){
       // ansarray[j++]=array[i];
    //}
    //for(int i = 0;i<n;i++){
        //cout<<ansarray[i]<<" ";
    //}
    //cout<<endl;/**/
 return 0;
}