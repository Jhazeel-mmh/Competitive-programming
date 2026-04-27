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
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for (auto &e : a)
            cin >> e;
        vector<bool> visited(n);

        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (c >= a[j] && !visited[j])
                {
                    int h = j;
                    while (h < n)
                    {
                        if (visited[h])
                        {
                            h++;
                            continue;
                        }
                        long long diff = (c - a[h]);

                        if (diff <= k)
                        {
                            a[h] += diff;
                            k -= diff;
                        }
                        else if (k != 0)
                        {
                            a[h] += k;
                            k = 0;
                        }
                        c += a[h];
                        visited[h] = true;
                        h++;
                    }
                    break;
                }
            }
        }
        cout << c << endl;
    }
}