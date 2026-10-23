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
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> ans(n, 0);

        int i = 1, val = 1;
        if (n == 3 || n == 1)
            i = 0;

        while (ans[i] == 0 && val <= n)
        {
            ans[i] = val;
            val++;
            i += 2;
            i %= n;
        }

        for (auto e : ans)
            cout << e << " ";
        cout << endl;
    }
}