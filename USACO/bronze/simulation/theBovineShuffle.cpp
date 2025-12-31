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
    setIO("shuffle");
    int n;
    cin >> n;
    vector<int> shuffle(n);
    vector<int> ids(n);

    for (auto &e : shuffle)
        cin >> e;
    for (auto &e : ids)
        cin >> e;

    for (int r = 0; r < 3; r++)
    {
        vector<int> res(ids.begin(), ids.end());
        for (int i = 0; i < n; i++)
        {
            res[i] = ids[shuffle[i] - 1];
        }
        ids.assign(res.begin(), res.end());
    }
    for (auto id : ids)
        cout << id << '\n';
}