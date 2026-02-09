#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> beauty(n);
        for (auto &e : beauty)
            cin >> e;

        vector<int> sum(n), less(n);

        for (int i = 0; i < n; i++)
        {
            sum[i] = beauty[i] + i;
            less[i] = beauty[i] - i;
        }

        for (int i = 1; i < n; i++)
            sum[i] = max(sum[i], sum[i - 1]);

        for (int i = n - 2; i >= 0; i--)
            less[i] = max(less[i], less[i + 1]);

        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            ans = max(ans, sum[i - 1] + beauty[i] + less[i + 1]);
        }
        cout << ans << endl;
    }
}