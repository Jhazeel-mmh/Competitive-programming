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

        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        vector<int> prefMin(n);
        vector<int> suffMax(n);
        prefMin[0] = a[0];
        suffMax[n - 1] = a[n - 1];

        for (int i = 1; i < n; i++)
            prefMin[i] = min(prefMin[i - 1], a[i]);

        for (int i = n - 2; i >= 0; i--)
            suffMax[i] = max(suffMax[i + 1], a[i]);

        vector<int> res(n);
        res[0] = res[n - 1] = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (prefMin[i - 1] < a[i] && suffMax[i + 1] > a[i])
                res[i] = 0;
            else
                res[i] = 1;
        }

        for (auto e : res)
            cout << e;
        cout << endl;
    }
}