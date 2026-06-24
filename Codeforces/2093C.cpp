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
        int x, k;
        cin >> x >> k;

        if (k > 1 && x > 1)
            cout << "NO" << endl;
        else if (k == 1)
        {
            bool ok = true;
            if (x <= 1)
                ok = false;

            for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                {
                    ok = false;
                    break;
                }
            }

            if (!ok)
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else
            cout << (k == 2 ? "YES" : "NO") << endl;
    }
}