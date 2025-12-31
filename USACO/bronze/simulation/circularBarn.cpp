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
int main()
{
    setIO("cbarn");
    int n;
    cin >> n;

    vector<int> barn(n, 0);
    int minDistance = INT32_MAX;
    for (auto &e : barn)
        cin >> e;

    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(n, false);
        int distance = 0, totalDistance = 0, j = i;
        while (!visited[j])
        {
            visited[j] = true;
            totalDistance += distance * barn[j];
            distance++;
            j++;
            j %= n;
        }
        minDistance = min(minDistance, totalDistance);
    }

    cout << minDistance << '\n';
}