#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        vector <int> a(n);
        vector <int> b(n);
        for (auto &e: a) cin >> e;
        for (auto &e: b) cin >> e;

        a[n - 1] = max(a[n-1], b[n-1]);
        for (int i = n - 2;i >= 0; i--){
            a[i] = max({a[i], a[i + 1], b[i]});
        }

        vector <int> pref(n + 1);
        for (int i = 1; i <= n; i++){
            pref[i] = pref[i - 1] + a[i-1];
        }


        while (q--){
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l-1] << " ";
        }
        cout << endl;
    }
}