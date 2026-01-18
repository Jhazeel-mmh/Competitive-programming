#include <bits/stdc++.h>
using namespace std;

void set_up(std::string name)
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}

int main()
{
    set_up("billboard");
    vector<vector<int>> coord(3, vector<int>(4, 0));

    for (auto &v : coord)
    {
        for (auto &e : v)
            cin >> e;
    }

    vector<vector<bool>> view(2002, vector<bool>(2002, false));

    for (int i = 0; i < 3; i++)
    {
        bool v = true;
        if (i == 2)
            v = false;

        for (int row = coord[i][1]; row < coord[i][3]; row++)
        {
            for (int col = coord[i][0]; col < coord[i][2]; col++)
            {
                view[row + 1000][col + 1000] = v;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < view.size(); i++)
    {
        for (int j = 0; j < view[0].size(); j++)
        {
            if (view[i][j])
                cnt++;
        }
    }

    cout << cnt << '\n';
}