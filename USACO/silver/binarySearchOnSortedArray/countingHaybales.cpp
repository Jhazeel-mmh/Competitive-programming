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
    setIO("haybales");
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;

    sort(a.begin(), a.end());

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto L = lower_bound(a.begin(), a.end(), l);
        auto R = lower_bound(a.begin(), a.end(), r);

        if (L == a.end())
        {
            cout << 0 << endl;
        }
        else if (R == a.end() || *R > r)
        {
            cout << distance(L, R) << endl;
        }
        else
            cout << distance(L, R) + 1 << endl;
    }
}