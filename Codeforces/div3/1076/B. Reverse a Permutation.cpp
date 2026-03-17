#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int r = -1;
        int maximun = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > maximun)
            {
                maximun = a[i];
                r = i;
            }
        }

        for (int i = r; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        for (int i = r + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}