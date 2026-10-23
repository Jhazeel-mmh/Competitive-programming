#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector <long long> f(n + 1);
    for (int i = 1; i <= n; i++) cin >> f[i];

    vector <long long> a(n + 1);

    for (int i = 2; i < n; i++){
        a[i] = (f[i - 1] - 2 * f[i] + f[i + 1]) / 2;
    }

    long long g1 = f[1], gn = f[n];

    for (int i = 2; i < n; i++){
        g1 -= a[i] * abs(i - 1);
        gn -= a[i] * abs(i - n);
    }

    a[1] = gn / (n - 1);
    a[n] = g1 / (n-1);

    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";

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