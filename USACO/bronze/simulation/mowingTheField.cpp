#include <bits/stdc++.h>
using namespace std;
void setIO()
{
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
}
int main()
{
    setIO();
    int n;
    cin >> n;
    vector<char> D(n);
    vector<int> S(n);
    for (int i = 0; i < n; i++)
        cin >> D[i] >> S[i];

    int time = 1;
    set<int> xs;
    map<pair<int, int>, int> grid;
    int row = 0, col = 0;
    for (int i = 0; i < n; i++)
    {
        int rowDir = 0, colDir = 0;
        int distance = S[i];
        if (D[i] == 'N')
            rowDir = -1;
        else if (D[i] == 'S')
            rowDir = 1;
        else if (D[i] == 'W')
            colDir = -1;
        else if (D[i] == 'E')
            colDir = 1;

        for (int j = 1; j <= distance; j++)
        {
            if (grid[{row, col}] != 0)
            {
                xs.insert(time - grid[{row, col}]);
            }
            grid[{row, col}] = time;
            row += rowDir;
            col += colDir;
            time++;
        }
    }
    if (xs.size() == 0)
    {
        cout << -1 << '\n';
        return 0;
    }
    cout << *xs.begin() << '\n';
}