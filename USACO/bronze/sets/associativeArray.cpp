#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    map<long long, long long> a;

    for (int i = 0; i < q; i++)
    {
        long long t;
        cin >> t;

        if (t == 0)
        {
            long long k, v;
            cin >> k >> v;

            a[k] = v;
        }
        else
        {
            long long k;
            cin >> k;
            cout << a[k] << '\n';
        }
    }
}