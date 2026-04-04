#include <bits/stdc++.h>
using namespace std;
int main()
{

    // WRONG ANSWER
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        unsigned long long a = 2, b = 4;
        cout << a << " " << b << " ";
        for (int i = 1; i < n - 1; i++)
        {
            if (i % 2 == 1)
            {
                unsigned long long xi = b * b;
                cout << xi << " ";
                a = b;
                b = xi;
            }
            else
            {
                unsigned long long xi = b / 2;
                cout << xi << " ";
                a = b;
                b = xi;
            }
        };
        cout << endl;
    }
}
