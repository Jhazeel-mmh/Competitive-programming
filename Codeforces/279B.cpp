#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;

    int ans = 0, sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum > t)
        {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r + 1 - l);
    }
    cout << ans;
}