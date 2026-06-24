#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        int maxAi = -INT32_MAX, minAi = INT32_MAX;

        for (auto &e : a)
        {
            cin >> e;
            maxAi = max(e, maxAi);
            minAi = min(e, minAi);
        }

        for (auto &e : b)
            cin >> e;

        set<long long> sumsAvaiable;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
                sumsAvaiable.insert(a[i] + b[i]);
        }

        auto maxSumAvaiable = sumsAvaiable.end();
        if (sumsAvaiable.size())
            maxSumAvaiable--;
        if (sumsAvaiable.size() > 1 ||
            (sumsAvaiable.size() == 1 && (*maxSumAvaiable < maxAi || *maxSumAvaiable > minAi + k)))
        {
            cout << 0 << endl;
            continue;
        }
        else if (sumsAvaiable.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }

        cout << (abs(maxAi - (k + minAi)) + 1) << endl;
    }
}