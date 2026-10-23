#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e : a) cin >> e;
    sort(a.begin(), a.end());

    int k = max(a[0 + 1] - a[0], a[0]);

    cout << k << endl;

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