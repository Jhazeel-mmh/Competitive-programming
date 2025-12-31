#include <bits/stdc++.h>
using namespace std;

void setIO(string name = "")
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    if (name.size())
    {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main()
{
    setIO("whereami");
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int size = 1; size <= n; size++)
    {
        map<string, int> list;
        bool ok = true;
        for (int i = 0; i <= n - size; i++)
        {
            string tmp = s.substr(i, size);
            list[tmp]++;
            if (list[tmp] > 1)
            {
                ok = false;
            }
        }

        if (ok)
        {
            cout << size << endl;
            return 0;
        }
    }
}