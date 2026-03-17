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
        string s;
        cin >> n >> s;

        int pos = 0;
        set<int> got;
        for (int i = 0; i < n; i++)
        {
            if (s[pos] == 'R')
            {
                got.insert(pos);
                pos++;
            }
            else if (s[pos] == 'L')
            {
                got.insert(pos);
                pos--;
            }
        }
        cout << got.size() << endl;
    }
}