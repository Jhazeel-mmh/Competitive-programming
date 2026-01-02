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
    setIO("traffic");
    int n;
    cin >> n;
    vector<string> ramp(n);
    vector<int> start(n), end(n);

    for (int i = 0; i < n; i++)
        cin >> ramp[i] >> start[i] >> end[i];

    int high = 1e7, low = -1e7;

    for (int i = n - 1; i >= 0; i--)
    {
        if (ramp[i] == "none")
        {
            low = max(low, start[i]);
            high = min(high, end[i]);
        }

        else if (ramp[i] == "off")
        {
            low += start[i];
            high += end[i];
        }
        else if (ramp[i] == "on")
        {
            low -= end[i];
            high -= start[i];
            low = max(0, low);
        }
    }
    printf("%d %d\n", low, high);
    high = 1e7;
    low = -1e7;
    for (int i = 0; i < n; i++)
    {
        if (ramp[i] == "none")
        {
            low = max(low, start[i]);
            high = min(high, end[i]);
        }
        else if (ramp[i] == "on")
        {
            low += start[i];
            high += end[i];
        }
        else if (ramp[i] == "off")
        {
            low -= end[i];
            high -= start[i];
            low = max(0, low);
        }
    }
    printf("%d %d\n", low, high);
}
