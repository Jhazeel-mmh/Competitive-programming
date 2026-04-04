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

        s = '1' + s + '1';
        int ans = 0;

        for (int i = 1, l = 0; i <= n; i++)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '1')
                    l = i;
                if (s[i + 1] == '1')
                {
                    int c = (l == 1) + (i == n);
                    ans += (i - l + 1 + c) / 3;
                }
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}