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
        vector<int> odd;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
                odd.push_back(x);
            else
                ans += x;
        }

        if (odd.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }

        sort(odd.rbegin(), odd.rend());

        int len = odd.size();
        for (int i = 0; i < ceil((double)len / 2.0); i++)
        {
            ans += odd[i];
        }
        cout << ans << endl;
    }
}