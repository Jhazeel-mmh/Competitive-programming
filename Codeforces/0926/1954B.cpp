#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e : a) cin >> e;

    bool allEqual = true;
    for (int i = 1; i < n && allEqual; i++){
        if (a[i] != a[i-1]) allEqual = false;
    }

    if (allEqual || n == 1) return void(cout << - 1 << endl);

   int last = -1, ans = n;

   for (int i = 0; i < n; i++){
        if (a[i] != a[0]){
            ans = min(ans, i - last - 1);
            last = i;
        }
   }

   ans = min(ans, n - last - 1);

   if (ans == n) cout << -1 << endl;
   else cout << ans << endl;



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