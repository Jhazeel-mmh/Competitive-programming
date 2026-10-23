#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int maximo = 0;
        for (auto &e : a)
        {
            cin >> e;
            maximo = max(maximo, e);
        }

        cout << maximo * n << endl;
    }
}