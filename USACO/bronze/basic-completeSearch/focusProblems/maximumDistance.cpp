#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (auto &e : x)
        cin >> e;
    for (auto &e : y)
        cin >> e;

    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            maxArea = max(maxArea, dx * dx + dy * dy);
        }
    }
    cout << maxArea << '\n';
}