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
    setIO("div7");
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &e : a)
        cin >> e;

    vector<long long> prefix(n + 1);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = a[i - 1] + prefix[i - 1];
    }

    int maxLen = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((prefix[j] - prefix[i - 1]) % 7 == 0)
            {
                maxLen = max(j - (i - 1), maxLen);
            }
        }
    }

    cout << maxLen << endl;
}