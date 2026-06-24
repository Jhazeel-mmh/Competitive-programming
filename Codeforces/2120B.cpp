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
        int n, s;
        cin >> n >> s;

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            int dx, dy, x, y;
            cin >> dx >> dy >> x >> y;

            if (x == y && dx == dy)
                res++;
            else if (y == (s - x) && dx != dy)
                res++;
        }

        cout << res << endl;
    }
}