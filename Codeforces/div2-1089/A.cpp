#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
        {
            printf("2 1\n");
            continue;
        }

        printf("%d %d ", n - 1, n);

        for (int i = n - 2; i >= 1; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}