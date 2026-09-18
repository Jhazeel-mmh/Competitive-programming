#include <bits/stdc++.h>
using namespace std;

int main(){ 
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n>> x;

    vector <int> a(n);
    for (auto &e: a) cin >> e;

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; a[i] <= x && i < n; i++){
        ans++;
        x -= a[i];
    }

    cout << ans << endl;

}