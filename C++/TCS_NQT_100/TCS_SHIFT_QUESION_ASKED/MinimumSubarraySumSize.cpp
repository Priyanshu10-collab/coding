#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int size = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            for(int j = i ; j < nums.size(); j++){
                sum += nums[j];

                if(sum >= target){
                    size = min(size,j-i+1);
                }
            }
        }
        return size == INT_MAX ? 0 : size;
    }
}

int main(){
    
}