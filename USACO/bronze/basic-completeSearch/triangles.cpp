#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> X(n), Y(n);

    for (int i = 0; i < n; i++)
        cin >> X[i] >> Y[i];

    int maximunArea = 0;
    for (int i = 0; i < n; i++)
    {
        int x = X[i], y = Y[i];
        int dx = 0, dy = 0;
        for (int j = 0; j < n; j++)
        {
            if (x == X[j])
                dy = max(dy, abs(y - Y[j]));

            if (y == Y[j])
                dx = max(dx, abs(x - X[j]));
        }
        maximunArea = max(maximunArea, dy * dx);
    }
    cout << maximunArea << '\n';
}