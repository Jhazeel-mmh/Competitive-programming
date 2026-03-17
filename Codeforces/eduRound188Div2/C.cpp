#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
        long long da = m / a,
                  db = m / b,
                  dc = m / c;

        long long mcd = gcd(gcd(a, b), c);

        long long la = 0, lb = 0, lc = 0;
        long long ca = 0, cb = 0, cc = 0;
        for (long long i = mcd; i <= m; i += mcd)
        {
            bool ai, bi, ci;
            ai = bi = ci = false;
            if (i % a == 0)
                ai = true;
            if (i % b == 0)
                bi = true;
            if (i % c == 0)
                ci = true;

            long long div = (ai + bi + ci);
            long long lt = 6;
            if (div)
                lt /= div;
            if (ai)
            {
                la += lt;
                ca++;
            }
            if (bi)
            {
                lb += lt;
                cb++;
            }
            if (ci)
            {
                lc += lt;
                cc++;
            }
        }
        da -= ca;
        db -= cb;
        dc -= cc;

        unsigned long long ra = ((unsigned long long)da * 6) + la,
                           rb = ((unsigned long long)db * 6) + lb,
                           rc = ((unsigned long long)dc * 6) + lc;
        printf("%llu %llu %llu\n", ra, rb, rc);
    }
}