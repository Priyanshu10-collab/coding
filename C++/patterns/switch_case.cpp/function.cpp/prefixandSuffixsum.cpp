#include<iostream>
#include<vector>
using namespace std;
bool checkPrefiSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum==prefix_sum){
            cout<<"index is"<<i<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkPrefiSuffixSum(v)<<endl;
 return 0;
}