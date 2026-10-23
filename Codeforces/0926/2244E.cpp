#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector <int> pref(n,0);

        for (int i = 0; i < n - 1; i++){
            pref[i + 1] = pref[i] + (s[i] == s[i + 1] ? 1 : 0);
        }



        while (q--){
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--;

            if (l == r){
                cout << "YES" << endl;
                continue;
            }

            int c = pref[r] - pref[l];
            int needed = (c + 1) / 2;
            cout << (needed <= k ? "YES" : "NO") << '\n';

        }
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