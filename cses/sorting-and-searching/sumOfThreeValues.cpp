#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        long long xi;
        cin >> xi;
        a[i] = {xi, i + 1};
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            long long sum = a[i].first + a[j].first + a[k].first;
            if (sum > x)
                k--;
            else if (sum < x)
                j++;
            else
            {
                printf("%d %d %d", a[i].second, a[j].second, a[k].second);
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE";
}