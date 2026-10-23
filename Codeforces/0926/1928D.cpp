#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set <int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }

    vector <int> b(a.begin(), a.end());

    int sz = b.size();

    if (sz == 1) return void(cout << 1 << endl);

    int l = 0, r = 1, ans = 0;
    int mn = INT32_MAX, mx = -INT32_MAX;
    while (l < sz && r < sz){
        mn = min(b[l], b[r]);
        mx = max(b[l], b[r]);

        if (mx - mn <= n - 1){
            ans = max(ans, r - l + 1);
            r++;
        } else l++;
    }


    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }


}