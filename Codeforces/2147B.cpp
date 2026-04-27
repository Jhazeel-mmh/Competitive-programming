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

        vector<long long> s(n * 2);
        s[0] = n;
        s[n] = n;
        int a = n - 1;
        for (int i = 1; a >= 1; i++)
        {
            s[i] = a;
            s[i + a * 2] = a;
            a -= 1;
        }
        for (int x : s)
            cout << x << " ";
        cout << endl;
    }
}