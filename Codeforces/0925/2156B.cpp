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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int As = 0, Bs = 0;
        for (char c : s)
        {
            if (c == 'A')
                As += 1;
            else
                Bs += 1;
        }

        while (q--)
        {
            int a;
            cin >> a;
            int tmpa = a;

            int cnt = 0, pointer = 0;

            if (!Bs)
            {
                cout << a << endl;
                continue;
            }

            while (tmpa > 0)
            {
                if (s[pointer] == 'A')
                    tmpa -= 1;
                else if (s[pointer] == 'B')
                    tmpa /= 2;
                cnt++;
                pointer = (pointer + 1) % n;
            }

            cout << cnt << endl;
        }
    }
}