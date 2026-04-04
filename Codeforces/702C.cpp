#include <bits/stdc++.h>
using namespace std;
const int maxdp = 1'000'012;

vector<int> dp(maxdp);
vector<int> a(maxdp);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;

    vector<int> c(n, INT32_MAX);

    for (int i = 0; i < n; i++)
    {

        auto it = lower_bound(b.begin(), b.end(), a[i]);
        if (it == b.end())
            it--;

        if (it != b.begin())
        {
            auto it2 = it - 1;
            c[i] = min(abs(*it - a[i]), abs(*it2 - a[i]));
        }
        else
        {
            c[i] = abs(*it - a[i]);
        }
    }

    int ans = 0;
    for (int x : c)
        ans = max(ans, x);
    cout << ans;
}