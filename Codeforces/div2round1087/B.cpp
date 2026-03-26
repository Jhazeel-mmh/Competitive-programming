#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        for (int i = 0; i < n - 1; i++)
        {
            int less = 0, gtr = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    gtr++;
                else if (a[i] < a[j])
                    less++;
            }
            cout << max(gtr, less) << " ";
        }
        cout << 0 << endl;
    }
}