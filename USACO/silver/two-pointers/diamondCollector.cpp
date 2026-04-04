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
    setIO("diamond");
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &e : a)
        cin >> e;

    sort(a.begin(), a.end());

    vector<int> can_take_left(n);

    int l = 0, r = 0;
    for (; l < n; l++)
    {
        while (r < n && a[r] - a[l] <= k)
            r++;
        can_take_left[l] = r - l;
    }

    vector<int> max_value_after_i(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        max_value_after_i[i] = max(can_take_left[i], max_value_after_i[i + 1]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, can_take_left[i] + max_value_after_i[i + can_take_left[i]]);
    }

    cout << ans;
}