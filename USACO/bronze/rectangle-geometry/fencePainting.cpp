#include <bits/stdc++.h>
using namespace std;

void set_up(std::string name)
{
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}

int main()
{
    set_up("paint");
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (
        a >= c && a <= d || b >= c && b <= d ||
        c >= a && c <= b || d >= a && d <= b)
    {
        vector<int> p = {a, b, c, d};
        sort(p.begin(), p.end());
        cout << p[3] - p[0] << '\n';
    }
    else
    {
        cout << (b - a) + (d - c) << '\n';
    }
}