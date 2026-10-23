#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while (_--){
        int n; cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        bool has = false;
        for (int i = 0; i < n - 1 && !has; i++){
            if (a[i] > a[i + 1]) has = true;
        }


        cout << (has ? 1 : n) << endl;

    }

}