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
        vector<int> a(n);
        int sum = 0;
        for (auto &e : a)
        {
            cin >> e;
            sum += e;
        }
        if (n * k % 2 == 0 || sum % 2 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}