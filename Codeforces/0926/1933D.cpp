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
        for (auto &e: a) cin >> e;

        sort(a.begin(), a.end());

        if (a[0] != a[1]) cout << "YES\n";
        else {
            bool ok = false;
            for (int i = 1; i < n; i++){
                if (a[i] % a[0] != 0) ok = true;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }

    }
}