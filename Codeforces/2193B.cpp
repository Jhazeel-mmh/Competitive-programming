#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
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

        int start = -1, end = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != n - i)
            {
                start = i;
                break;
            }
        }
        if (start == end)
        {
            for (auto x : a)
                cout << x << " ";
            cout << endl;
            continue;
        }

        for (int j = start; j < n; j++)
        {
            if (a[j] == n - start)
                end = j;
        }
        vector<int> b(a.begin(), a.end());
        int j = end;
        for (int i = start; i <= end; i++)
        {
            b[i] = a[j--];
        }

        for (auto x : b)
            cout << x << " ";
        cout << endl;
    }
}