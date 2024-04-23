#include<iostream>
#include<climits>
using namespace std;
int largestelementindex(int array[],int size){
    int max =INT_MIN;

    for(int i =0;i<size;i++){
        if(array[i]>max){
            max = array[i];
            maxindex = i;
        }
        return maxindex;
    }


}
int main()
{
    int array[]={2,3,5,7,6,1,7};
    int indexoflargest = largestelementindex(array,7);
    cout<<array[indexoflargest]<<endl;

    int largestelement = array[indexoflargest];
    for(int i =0;i<7;i++){
        if(array[i]==largestelement){
            array[i]=-1;
        }
    }


    int indexofsecondlargest = largestelementindex(array,7);
    cout<<array[indexofsecondlargest]<<endl;

 return 0;
}