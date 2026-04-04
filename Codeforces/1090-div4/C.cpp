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

        int x = 1;
        for (int xi = 3 * n, i = 3 * n; i >= 3; i -= 3, xi -= 2)
        {
            printf("%d %d %d ", xi, xi - 1, x++);
        }
        printf("\n");
    }
}