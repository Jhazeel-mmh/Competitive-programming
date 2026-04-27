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
        bool ok = false;
        for (auto &e : a) {
            cin >> e;
            if (e == 100) ok = true;
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}