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

    vector<int> segments;

    for (int i = 0; i < n; i++)
    {
        vector<int> currSeg;
        int l = i, r = i + 1;
        while (r < n)
        {
            if (a[r] - a[l] > k)
            {
                l = r;
                continue;
            }
            currSeg.push_back(r + 1 - l);
            r++;
        }

        if (currSeg.size() < 2)
            continue;

        sort(currSeg.rbegin(), currSeg.rend());
        segments.push_back(currSeg[0] + currSeg[1]);
    }

    sort(segments.rbegin(), segments.rend());
    cout << segments[0] << endl;
}