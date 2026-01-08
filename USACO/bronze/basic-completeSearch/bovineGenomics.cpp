#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<string> spotty(n), plain(n);

    for (int i = 0; i < n; i++)
        cin >> spotty[i];

    for (int i = 0; i < n; i++)
        cin >> plain[i];

    vector<vector<int>> cnt;

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int l = j + 1; l < m; l++)
            {
                set<string> spottyGenomics, plainGenomics;
                for (int cow = 0; cow < n; cow++)
                {
                    string g = {spotty[cow][i], spotty[cow][j], spotty[cow][l]};
                    spottyGenomics.insert(g);
                    g = {plain[cow][i], plain[cow][j], plain[cow][l]};
                    plainGenomics.insert(g);
                }
                bool unique = true;

                for (auto g : plainGenomics)
                {
                    if (spottyGenomics.count(g))
                        unique = false;
                }

                if (unique)
                {
                    vector<int> u = {i, j, l};
                    cnt.push_back(u);
                }
            }
        }
    }

    cout << cnt.size() << '\n';
}