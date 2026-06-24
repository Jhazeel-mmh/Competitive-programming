#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> disc(k);

    for (int &e : a)
        cin >> e;
    for (int &e : disc)
        cin >> e;

    sort(a.rbegin(), a.rend());
    sort(disc.begin(), disc.end());

    int elPtr = 0, dPtr = 0;

    long long ans = 0;
    while (elPtr < n && dPtr < k)
    {
        for (int tmp = elPtr; tmp < n && tmp < elPtr + disc[dPtr] - 1; tmp++)
        {
            ans += a[tmp];
        }
        elPtr += disc[dPtr];
        dPtr++;
    }

    while (elPtr < n)
        ans += a[elPtr++];

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}