#include <bits/stdc++.h>
using namespace std;
void setIO(string name)
{
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
    freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}
int main()
{
    setIO("cardgame");
    int n; cin >> n;
    vector <int> a(n);
    for (auto &e: a) cin >> e;

    vector <int> tmp(a.begin(), a.end());
    sort(tmp.begin(), tmp.end());

    vector <int> b;
    
    int j = 0;
    for (int i = 1; i <= n*2; i++){
        if (i == tmp[j]) j++;
        else b.push_back(i);
    }

    sort(b.rbegin(), b.rend());
     
    // for (auto e: b) cout << e << " ";

    int ans = 0;
    
    for (int i = 0; i < n / 2; i++){
        if (b[i] > a[i]) ans++;
        // printf("%d %d\n", b[i] , a[i]);
    }

    for (int i = n / 2; i < n; i++){
        if (b[i] < a[i]) ans++;
        // printf("%d %d\n", b[i] , a[i]);
    }
    cout << ans << endl;
}