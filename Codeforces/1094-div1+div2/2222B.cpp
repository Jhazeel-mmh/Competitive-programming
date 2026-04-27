#include <bits/stdc++.h>
using namespace std;
// NOT solved yet
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

        int cntOdd = 0, cntEven = 0;
        vector<int> odd, even;
        bool okOdd = false, okEven = false;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
            {
                odd.push_back(x);
                if (x >= 0)
                    okOdd = true;
            }
            else
            {
                even.push_back(x);
                if (x >= 0)
                    okEven = true;
            }
            ans += x;
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        for (int i = 0; i < m; i++)
        {
            int mi;
            cin >> mi;
            if (mi % 2 == 0)
            {
                cntEven++;
            }
            else
            {
                cntOdd++;
            }
        }

        long long res = 0;
        if (!okEven && cntEven)
        {
            res += even[0];
        }

        for (int i = 0; i < even.size() && cntEven && okEven; i++)
        {
            if (even[i] > 0)
            {
                res += even[i];
                cntEven--;
            }
        }

        if (!okOdd && cntOdd)
        {
            res += odd[0];
        }
        for (int i = 0; i < odd.size() && cntOdd && okOdd; i++)
        {
            if (odd[i] > 0)
            {
                res += odd[i];
                cntOdd--;
            }
        }

        cout << ans - res << endl;
    }
}