#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector <int> a(n);
        int sum = 0;
        for (auto &e: a){ 
            cin >> e;
            if (e != 0)
            sum += e;
            else sum += 1;

        }
        cout << sum << endl;
    }
}