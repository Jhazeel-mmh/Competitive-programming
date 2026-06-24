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

        string a, b;
        cin >> a >> b;

        int cnta = 0, cntb = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '0')
                    cnta++;
                if (b[i] == '0')
                    cntb++;
            }
            else
            {
                if (b[i] == '0')
                    cnta++;
                if (a[i] == '0')
                    cntb++;
            }
        }

        if (cnta >= ceil((double)n / 2) && cntb >= n / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}