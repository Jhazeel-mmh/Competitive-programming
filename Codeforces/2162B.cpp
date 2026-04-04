#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<int> sol;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                sol.push_back(i + 1);
            }
        }

        cout << sol.size() << endl;
        for (auto x : sol)
            cout << x << " ";

        cout << endl;
    }
}