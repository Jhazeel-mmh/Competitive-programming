#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
long long ans = LONG_LONG_MAX;

void resolver(int i, long long A, long long B)
{
    if (i == n)
    {
        ans = min(ans, abs(A - B));
        return;
    }
    resolver(i + 1, A + a[i], B);
    resolver(i + 1, A, B + a[i]);
}

int main()
{
    cin >> n;
    a.resize(n);
    for (auto &e : a)
        cin >> e;

    resolver(0, 0, 0);
    cout << ans << endl;
}