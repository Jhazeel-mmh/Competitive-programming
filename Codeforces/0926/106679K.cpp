#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n), b(n);

    
    for (int &e : a) cin >> e;
    for (int &e : b) cin >> e;

    long long sum = 0;
    bool ok = true;
    for (int i = 0; i < n; i++){
        if (a[i] < b[i]) {ok = false; break;}
        sum += a[i];
    }


    if (!ok) {
        cout << -1 << endl;
        return 0;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, sum - a[i] + b[i]);
    }
    cout << ans << endl;
}