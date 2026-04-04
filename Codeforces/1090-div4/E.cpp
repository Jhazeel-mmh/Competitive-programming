#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
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

        vector<bool> taked(n, false);

        for (int i = 0; i < n - 1; i++)
        {

            int x, index;
            for (int j = 0; j < n; j++)
            {
                if (!taked[j])
                {
                    x = a[j];
                    index = j;
                    break;
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (a[j] > x && !taked[j])
                {
                    x = a[j];
                    index = j;
                }
            }

            taked[index] = true;

            for (int j = 0; j < n; j++)
            {
                if (!taked[j])
                {
                    a[j] = a[j] ^ x;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (!taked[i])
                cout << a[i] << endl;
        }
    }
}