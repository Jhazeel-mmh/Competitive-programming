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
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n <= 4)
        {
            cout << 2 << endl;
            continue;
        }
        int ans = 2, currSum = 4;

        while (currSum < n)
        {
            ans += 1;
            currSum += 1;
            currSum *= 2;
        }

        cout << ans << endl;
    }
}