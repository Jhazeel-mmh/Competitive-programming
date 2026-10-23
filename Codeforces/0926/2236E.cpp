#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e : a) cin >> e;

    vector <vector <bool>> can(n+1, vector <bool> (n+1));

    for (int i = 0; i < n; i++){
        vector <bool> used(n+1);
        int mx = a[i], mn = a[i];
        for (int j = i; j < n; j++){
            if (used[a[j]]) break;
            used[a[j]] = 1;

            mx = max(mx, a[j]);
            mn = min(mn, a[j]);
            if (mx - mn == j - i) can[mn][mx] = true;
        }
    }


    for (int ans = n; ans > 0; ans--){
        for (int i = 1; i + 2 * ans - 1 <= n; i++){
            if (can[i][i+ ans - 1] && can[i + ans][i + 2 * ans - 1]){
                cout << ans << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
}