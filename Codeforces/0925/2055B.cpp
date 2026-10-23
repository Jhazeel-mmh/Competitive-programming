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
        vector<int> a(n), b(n);

        for (auto &e : a)
            cin >> e;
        for (auto &e : b)
            cin >> e;

        int lessers = 0, minDiff = INT32_MAX, diff = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                lessers++;
                diff = b[i] - a[i];
            }
            if (a[i] >= b[i])
                minDiff = min(a[i] - b[i], minDiff);
        }

        if (lessers == 0 ||
            (lessers == 1 && minDiff != INT32_MAX && minDiff >= diff))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}