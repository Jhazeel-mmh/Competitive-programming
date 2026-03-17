#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i += 2)
        {
            for (int j = i; j <= n; j *= 2)
            {
                for (int k = i * 2; k <= n; k *= 2)
                {
                    if (a[k / 2] > a[k])
                        swap(a[k], a[k / 2]);
                }
            }
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}