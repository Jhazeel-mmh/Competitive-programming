#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        vector<int> a(7);
        for (auto &e : a)
            cin >> e;

        int ans = -INT32_MAX;
        for (int i = 0; i < 7; i++)
        {
            int curr = a[i];
            for (int j = 0; j < 7; j++)
            {
                if (j == i)
                    continue;
                curr -= a[j];
            }
            ans = max(curr, ans);
        }
        cout << ans << endl;
    }
}