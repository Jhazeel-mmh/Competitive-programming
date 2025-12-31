#include <bits/stdc++.h>
using namespace std;
void setIO()
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
}

int main()
{
    setIO();
    vector<pair<int, int>> cubes(3, {0, 0});

    for (int i = 0; i < 3; i++)
    {
        cin >> cubes[i].first >> cubes[i].second;
    }

    int a = 0, b = 1;
    for (int i = 0; i < 100; i++)
    {
        a %= 3;
        b %= 3;
        if ((cubes[b].first - cubes[b].second) >= cubes[a].second)
        {
            cubes[b].second += cubes[a].second;
            cubes[a].second = 0;
        }
        else
        {
            int diff = cubes[b].first - cubes[b].second;
            cubes[b].second += diff;
            cubes[a].second -= diff;
        }
        a++;
        b++;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << cubes[i].second << '\n';
    }
}