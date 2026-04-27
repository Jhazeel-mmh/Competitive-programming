#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        int k = 1;
        for (int i = 1; i < n + 1; i++)
        {
            cout << k * (k + 2) << " ";
            k += 2;
        }
        cout << endl;
    }
}
