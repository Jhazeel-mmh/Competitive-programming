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

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(a[i], mx);
            if (i % 2 == 1)
                a[i] = mx;
        }

        long long cnt = 0;

        for (int i = 0; i < n; i += 2)
        {
            int dif = -1;
            if (i > 0)
            {
                dif = max(dif, a[i] - a[i - 1]);
            }

            if (i < n - 1)
            {
                dif = max(dif, a[i] - a[i + 1]);
            }

            cnt += dif + 1;
        }

        cout << cnt << endl;
    }
}