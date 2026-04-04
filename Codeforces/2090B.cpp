#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (int i = 0; i < n; i++)
            cin >> grid[i];

        vector<vector<bool>> visited(n, vector<bool>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '0')
                    break;
                visited[i][j] = true;
            }
        }

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (grid[i][j] == '0')
                    break;
                visited[i][j] = true;
            }
        }

        bool ok = true;
        for (int i = 0; i < n && ok; i++)
        {
            for (int j = 0; j < m && ok; j++)
            {
                if (grid[i][j] == '1' && !visited[i][j])
                    ok = false;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}