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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (auto &v : a)
            for (auto &x : v)
                cin >> x;

        for (auto &v : a)
            sort(v.begin(), v.end());

        vector<pair<int, int>> ans(n);
        for (int i = 0; i < n; i++)
            ans[i] = {a[i][0], i};

        sort(ans.begin(), ans.end());

        int top = -1;
        bool ok = true;
        for (int i = 0; i < m && ok; i++)
        {
            for (int j = 0; j < n && ok; j++)
            {
                int curr = a[ans[j].second][i];
                if (curr > top)
                {
                    top = curr;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
        {
            for (auto e : ans)
                cout << e.second + 1 << " ";
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}