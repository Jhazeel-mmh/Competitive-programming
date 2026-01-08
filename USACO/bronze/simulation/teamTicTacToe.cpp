#include <bits/stdc++.h>
using namespace std;
void setIO(string name)
{
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
    freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

set<pair<char, char>> teamCows;

set<char> uniqueLetters;
set<char> individualsCow;
void updateCnts()
{
    if (uniqueLetters.size() == 1)
        individualsCow.insert(*uniqueLetters.begin());
    else if (uniqueLetters.size() == 2)
    {
        auto it1 = uniqueLetters.begin(), it2 = next(it1);
        teamCows.insert(make_pair(*it1, *it2));
    }

    uniqueLetters.clear();
}

int main()
{
    setIO("tttt");
    vector<vector<char>> grid(3, vector<char>(3));

    for (auto &row : grid)
        for (auto &e : row)
            cin >> e;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            uniqueLetters.insert(grid[i][j]);
        }
        updateCnts();
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            uniqueLetters.insert(grid[j][i]);
        }
        updateCnts();
    }

    for (int i = 0; i < 3; i++)
        uniqueLetters.insert(grid[i][i]);
    updateCnts();

    for (int i = 2; i >= 0; i--)
    {
        uniqueLetters.insert(grid[2 - i][i]);
    }
    updateCnts();

    printf("%ld\n%ld", individualsCow.size(), teamCows.size());
}