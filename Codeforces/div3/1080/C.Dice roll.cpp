#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == a[i] || a[i - 1] + a[i] == 7)
            {
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }
}