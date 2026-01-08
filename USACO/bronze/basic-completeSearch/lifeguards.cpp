#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> start(n), end(n);

    for (int i = 0; i < n; i++)
        cin >> start[i] >> end[i];

    int maximunTime = 0;

    for (int i = 0; i < n; i++)
    {
        vector<bool> time(1001, false);
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;

            for (int t = start[j]; t < end[j]; t++)
            {
                time[t] = true;
            }
        }
        int currentTime = 0;
        for (auto el : time)
        {
            if (el == true)
                currentTime++;
        }

        maximunTime = max(maximunTime, currentTime);
    }

    cout << maximunTime << '\n';
}