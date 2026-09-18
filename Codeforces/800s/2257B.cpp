#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
       int n, m;
       cin >> n >> m;
        vector <int> a(n), b(m);
        for (auto &e: a) cin >> e;
        for (auto &e: b) cin >> e;

        int valueA = a[n-1] + 1, valueB = b[m-1];

        for (int i = 0; i < n - 1; i++) valueA += a[i] - a[i+1] + 1;
        for (int i = 0; i < m - 1; i++) valueB += b[i] - b[i+1] + 1;

        if (valueA > valueB) cout << 1 << endl;
        else cout << 2 << endl;
    }

}