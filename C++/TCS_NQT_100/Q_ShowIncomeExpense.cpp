#include<bits/stdc++.h>
using namespace std;

int main(){
    int TotalIncome;
    cin >> TotalIncome;

    string s;
    int expenses = 0;
    int saving = 0;

    unordered_map<string,int> mp;
    vector<string> v;

    while(true){
        cin >> s;

        if(s == "done") break;

        int expense;
        cin >> expense;

        expenses += expense;

        if(mp.find(s) == mp.end()){
            v.push_back(s);
        }

        mp[s] = expense;
    }

    saving = TotalIncome - expenses;

    cout << "Total Income: " << TotalIncome << endl;
    cout << "Total Expenses: " << expenses << endl;
    cout << "Total Saving: " << saving << endl;

    cout << "Category:" << endl;

    for(string s : v){
        cout << s << ": " << mp[s] << endl;
    }
}