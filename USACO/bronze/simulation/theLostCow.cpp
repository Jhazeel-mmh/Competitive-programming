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
    setIO("lostcow");
    int x, y;
    cin >> x >> y;

    int currentLocation = x, zigDistance = 1, distanceCount = 0;
    for (int i = 0;; i++)
    {
        if (i % 2 == 0)
        {
            int targetLocation = x + zigDistance;
            if (y > x && targetLocation >= y)
            {
                distanceCount += abs(y - currentLocation);
                break;
            }
            distanceCount += abs(currentLocation - targetLocation);
            currentLocation = targetLocation;
        }
        else
        {
            int targetLocation = x - zigDistance;
            if (y < x && targetLocation <= y)
            {
                distanceCount += abs(y - currentLocation);
                break;
            }
            distanceCount += abs(targetLocation - currentLocation);
            currentLocation = targetLocation;
        }

        zigDistance *= 2;
    }
    cout << distanceCount << '\n';
}