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
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        vector<int> b(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int cnt = 0;
        int split = n - 1;
        for (int i = 0; i < n; i++)
        {

            for (int j = split; j >= 0; j--)
            {
                if (a[j] == b[i])
                {
                    split = j - 1;
                    cnt++;
                    break;
                }
            }
            if (split == -1)
                break;
        }
        cout << cnt << endl;
    }
}