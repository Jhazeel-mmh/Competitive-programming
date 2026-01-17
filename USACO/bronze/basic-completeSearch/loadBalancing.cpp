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
    setIO("balancing");
    int n, b;
    cin >> n >> b;

    vector<int> X(n), Y(n);

    int minX = INT32_MAX, maxX = 0;
    int minY = INT32_MAX, maxY = 0;

    for (int i = 0; i < n; i++)

        cin >> X[i] >> Y[i];

    int m = INT32_MAX;

    for (int row : Y)
    {
        for (int col : X)
        {
            int a = 0, b = 0, c = 0, d = 0;
            for (int i = 0; i < n; i++)
            {
                if (X[i] < col + 1 && Y[i] < row + 1)
                    a++;
                if (X[i] < col + 1 && Y[i] > row + 1)
                    b++;
                if (X[i] > col + 1 && Y[i] < row + 1)
                    c++;
                if (X[i] > col + 1 && Y[i] > row + 1)
                    d++;
            }
            int currM = max({a, b, c, d});
            m = min(m, currM);
        }
    }
    cout << m << '\n';
}
