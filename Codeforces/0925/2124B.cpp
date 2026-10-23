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
        for (int &i : a)
            cin >> i;

        cout << min(a[0], a[1]) + a[0] << endl;
    }
}