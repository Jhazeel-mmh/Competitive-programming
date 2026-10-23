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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> q(m);
        vector<int> qk(k);
        for (auto &e : q)
            cin >> e;
        for (auto &e : qk)
            cin >> e;

        set<int> qk2(qk.begin(), qk.end());

        if (k >= n)
        {
            for (int i = 0; i < m; i++)
                cout << 1;
            cout << endl;
        }
        else if (n - k > 1)
        {
            for (int i = 0; i < m; i++)
                cout << 0;
            cout << endl;
        }
        else
        {
            for (auto x : q)
            {
                if (!qk2.count(x))
                    cout << 1;
                else
                    cout << 0;
            }
            cout << endl;
        }
    }
}