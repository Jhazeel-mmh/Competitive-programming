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
        string s;
        cin >> n >> s;

        s = s + s;
        int ans = 0, i = 0, r = 0;

        while (i < 2 * n)
        {
            if (s[i] == '0')
            {
                r = i;

                while (r < 2 * n && s[r] != '1')
                    r++;
                ans = max(ans, r - i);
                i = r;
            }
            i++;
        }

        /*
            sol for the editorial only counts the number of zeros between ones
            but does the same with the original string s = s + s;
            int cur = 0;

            int res = 0;

            for (int i = 0; i < n; i++) {
                if (s[i] == '1') cur = 0;
                else cur++;
                res = max(res, cur);
            }
            cout << res << "\n";
        */

        cout << ans << endl;
    }
}