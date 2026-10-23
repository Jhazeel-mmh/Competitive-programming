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

        if (n <= 4)
        {
            cout << -1 << endl;
            continue;
        }

        for (int a = 2; a <= n; a += 2)
        {
            if (a != 4)
                cout << a << " ";
        }
        cout << 4 << " " << 5 << " ";

        for (int a = 1; a <= n; a += 2)
        {
            if (a != 5)
                cout << a << " ";
        }
        cout << endl;
    }
}