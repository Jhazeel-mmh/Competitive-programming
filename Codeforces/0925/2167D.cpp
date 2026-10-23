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
        vector<long long> a(n);
        for (auto &e : a)
            cin >> e;

        sort(a.begin(), a.end());

        bool found = false;
        for (long long i = 2; i <= a[0] && !found; i++)
        {
            for (int j = 0; j < n && !found; j++)
            {
                if (gcd(a[j], i) == 1)
                {
                    cout << i << endl;
                    found = true;
                }
            }
        }

        if (!found)
        {
            cout << a[0] + 1 << endl;
            found = true;
        }
    }
}