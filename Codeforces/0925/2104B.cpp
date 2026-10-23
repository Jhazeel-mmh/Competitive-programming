#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> dp(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[i + 1] = max(dp[i], a[i]);
        }

        vector<long long> pref(n + 1);
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + a[i - 1];

        for (int i = n; i >= 1; i--)
        {
            long long ans = 0;
            ans += pref[n] - pref[i];
            ans += dp[i];
            cout << ans << " ";
        }
        cout << endl;
    }
}