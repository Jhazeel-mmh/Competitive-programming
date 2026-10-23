#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e : a) cin >> e;

    set<int> total, current;

    int ans = 0;
    for (int i = 0; i < n; i++){
        total.insert(a[i]);
        current.insert(a[i]);
        if (total == current){
            ans++;
            current.clear();
        }

    }

    
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
}