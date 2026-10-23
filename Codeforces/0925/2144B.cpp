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
        int n;
        cin >> n;

        long long tsum = 0, sum = 0;
        int cntZeros = 0, idx = -1;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                cntZeros++;
                idx = i;
            }
            tsum += i + 1;
            sum += a[i];
        }

        if (cntZeros == 1)
            a[idx] = tsum - sum;

        int l = -1, r = -1;

        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] != i)
            {
                l = i - 1;
                break;
            }
        }

        for (int i = n; i >= 1; i--)
        {
            if (a[i - 1] != i)
            {
                r = i - 1;
                break;
            }
        }

        if (l == -1 && r == -1)
        {
            cout << 0 << endl;
            continue;
        }

        cout << r - l + 1 << endl;
    }
}