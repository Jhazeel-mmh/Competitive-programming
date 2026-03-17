#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        for (auto &e : a)
        {
            cin >> e;
            s -= e;
        }

        if (s == 0)
        {
            cout << "yes" << endl;
            return 0;
        }

        if (abs(s) % x == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}