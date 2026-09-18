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

        vector<int> a(n);
        for (auto &e : a)
            cin >> e;

        sort(a.begin(), a.end());
        set<int> b(a.begin(), a.end());

        vector<int> segmentSizes;
        int currCnt = 1, prev = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == prev)
                currCnt++;
            else
            {
                segmentSizes.push_back(currCnt);
                currCnt = 1;
                prev = a[i];
            }
        }
        segmentSizes.push_back(currCnt);

        sort(segmentSizes.begin(), segmentSizes.end());

        int eliminated = 0;
        for (int i = 0; i < segmentSizes.size(); i++)
        {
            if (k >= segmentSizes[i])
            {
                k -= segmentSizes[i];
                eliminated++;
            }
            else
                break;
        }

        int ans = b.size() - eliminated;
        if (ans == 0)
            cout << 1 << endl;
        else
            cout << ans << endl;
    }
}