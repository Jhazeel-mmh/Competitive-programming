#include <bits/stdc++.h>
using namespace std;

long long get(long long a, long long b, long long c, long long m)
{
    long long c1 = m / a,
              c2 = (m / lcm(a, b)) + (m / lcm(a, c)),
              c3 = m / lcm(lcm(a, b), c);
    return (c1 - c2 + c3) * 6 + (c2 - (2 * c3)) * 3 + c3 * 2;
}

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
        long long ra = get(a, b, c, m),
                  rb = get(b, a, c, m),
                  rc = get(c, a, b, m);
        cout << ra << " " << rb << " " << rc << endl;
    }
}