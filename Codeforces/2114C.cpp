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
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        int ans = 0, i = 1, last = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] - last > 1)
            {
                ans++;
                last = a[i];
            }
        }
        cout << ans << endl;
    }
}