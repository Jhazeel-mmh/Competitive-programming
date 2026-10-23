#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int amount = 0;
    for (int i = 1; ; i++){
        int currLevlCost = (i * (i + 1)) / 2;

        if (amount + currLevlCost == n){
            cout << i << endl;
            return 0;
        } 

        if (amount + currLevlCost > n){
            cout << i  - 1 << endl;
            return 0;
        } 

        amount += currLevlCost;
    }



}

   