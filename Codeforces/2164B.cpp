#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        bool found = false;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = i + 1; j < n && !found; j++)
            {
                if ((a[j] % a[i]) % 2 == 0)
                {
                    cout << a[i] << " " << a[j] << endl;
                    found = true;
                }
            }
        }

        if (!found)
            cout << -1 << endl;
    }
}