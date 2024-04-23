#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int colum;
    cin>>colum;

//creating a 2d array
    int** arr = new int*[row];

    for(int i=0;i<row;i++){
        arr[i]= new int[colum];
    }
    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cin>>arr[i][j];
        }
    }
    //giving outputs
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    //realising memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete []arr;

    //how to create a 2d array dynamically
    //input/output
    //memory free kaise karwni hai
 return 0;
}