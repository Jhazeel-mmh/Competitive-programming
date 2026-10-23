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
        vector <vector <int>> m(n, vector <int> (n));
        vector <int> a(n);

        for (int i = 0; i < n; i++){
            a[i] = (1 << 30) - 1;
        }


        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> m[i][j];
                if (i != j){
                    a[i] &= m[i][j];
                    a[j] &= m[i][j];
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i != j && (a[i] | a[j]) != m[i][j]){
                    ok = false;
                }
            }
        } 

        cout << (ok ? "YES\n" : "NO\n");
        if (ok){
            for (auto e : a) cout << e << " ";
            cout << "\n";
        }
    }
}