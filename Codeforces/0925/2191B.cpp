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
        for (auto &e : a)
            cin >> e;

        int zeros = 0, ones = 0;

        for (int x : a)
        {
            if (x == 1)
                ones += 1;
            if (x == 0)
                zeros += 1;
        }

        if (zeros == 1 | (zeros >= 2 && ones >= 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}