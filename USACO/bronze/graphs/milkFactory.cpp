#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<int>> stations(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        stations[a].push_back(b);
    }

    vector<set<int>> totalDestinations(n + 1);
    for (int i = 1; i <= n; i++)
    {
        queue<int> toVisit;
        vector<int> destinantions;
        for (auto d : stations[i])
            toVisit.push(d);

        while (!toVisit.empty())
        {
            int head = toVisit.front();
            toVisit.pop();
            destinantions.push_back(head);
            for (auto neighbours : stations[head])
            {
                toVisit.push(neighbours);
            }
        }

        for (auto d : destinantions)
            totalDestinations[i].insert(d);
    }

    for (int desti = 1; desti <= n; desti++)
    {
        int cntMisising = 0;

        for (int i = 1; i <= n; i++)
        {
            if (!totalDestinations[i].count(desti) && i != desti)
                cntMisising++;
        }

        if (!cntMisising)
        {
            cout << desti << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
}