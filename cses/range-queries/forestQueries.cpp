#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> forest(n, vector<int>(n));

    for (auto &row : forest)
    {
        for (auto &e : row)
        {
            char c;
            cin >> c;
            if (c == '*')
                e = 1;
            else
                e = 0;
        }
    }
    vector<vector<int>> pref(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            pref[i][j] = forest[i - 1][j - 1] + pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = pref[x1 - 1][y1 - 1] + pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2];
        cout << ans << '\n';
    }
}
