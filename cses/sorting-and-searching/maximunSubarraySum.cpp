#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;

    vector<long long> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i - 1];
    }

    long long minSubarrayLess = pref[0];
    long long ans = pref[1];
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, pref[i] - minSubarrayLess);
        minSubarrayLess = min(minSubarrayLess, pref[i]);
    }
    cout << ans << '\n';
}