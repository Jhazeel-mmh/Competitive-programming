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
        for (auto &e : a)
            cin >> e;

        sort(a.begin(), a.end());
        int x = a[0];

        for (int i = 0; i < n; i++)
            a[i] -= x;

        set<int> b(a.begin(), a.end()); // esto copia el vector a en el set b

        int i = 0;
        while (b.count(i))
            i++;
        cout << i << endl;
        cout << "XX" << endl;
    }
}