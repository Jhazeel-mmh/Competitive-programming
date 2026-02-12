#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (auto &e : a)
            cin >> e;

        for (int i = 0; i < n; i++)
            a[i] %= m;

        for (int i = 0; i < n; i++)
            a.push_back(a[i] + m);

        sort(a.begin(), a.end());

        vector<ll> prefix(n * 2 + 1);
        for (int i = 1; i <= n * 2; i++)
            prefix[i] = prefix[i - 1] + a[i - 1];

        ll ans = LONG_LONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ll res = (prefix[i + n] - prefix[i + n - n / 2]) - (prefix[i + n / 2] - prefix[i]);
            ans = res < ans ? res : ans;
        }
        cout << ans << endl;
    }
}