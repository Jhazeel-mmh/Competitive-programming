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
        string s;
        cin >> s;
        int n = s.size();

        int ans = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == 'u')
            {
                if (s[i - 1] == 'u' && s[i + 1] == 'u')
                {
                    s[i - 1] = 's';
                    s[i + 1] = 's';
                    ans += 2;
                    i++;
                }
                else if (s[i - 1] == 's' && s[i + 1] == 'u' ||
                         s[i - 1] == 'u' && s[i + 1] == 's')
                {
                    s[i - 1] = 's';
                    s[i + 1] = 's';
                    ans += 1;
                    i++;
                }
            }
        }

        if (s[0] == 'u')
            ans += 1;
        if (s[n - 1] == 'u')
            ans += 1;

        cout << ans << endl;
    }
}