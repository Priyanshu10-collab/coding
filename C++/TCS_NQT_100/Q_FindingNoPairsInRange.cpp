#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x,y;
        cin >> n >> x >> y;

        vector<int> arr(n);

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = i+1 ; j < n ; j++){

                string s1 = to_string(arr[i]) + to_string(arr[j]);
                int num1 = stoi(s1);

                if(num1 >= x && num1 <= y){
                    count++;
                }

                string s2 = to_string(arr[j]) + to_string(arr[i]);
                int num2 = stoi(s2);

                if(num2 >= x && num2 <= y){
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}