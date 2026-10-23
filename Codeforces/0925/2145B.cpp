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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string ans(n, '+');

        int top = 0, bottom = n - 1, undefined = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '0')
            {
                ans[top] = '-';
                top++;
                n--;
            }
            else if (s[i] == '1')
            {
                ans[bottom] = '-';
                bottom--;
                n--;
            }
            else
            {
                undefined++;
            }
        }

        if (undefined < n)
        {
            while (undefined)
            {
                ans[top++] = '?';
                ans[bottom--] = '?';
                undefined--;
            }

            cout << ans << endl;
        }
        else
        {
            while (top <= bottom)
            {
                ans[top++] = '-';
                ans[bottom--] = '-';
            }
            cout << ans << endl;
        }
    }
}