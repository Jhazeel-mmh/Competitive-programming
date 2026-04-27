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
        int n, k, index;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &e : a)
            cin >> e;
        cin >> index;

        int special = a[index - 1];

        int left = -1, right = -1;

        for (int i = 0; i < n; i++)
        {
            if (left == -1 && a[i] != special)
                left = i;

            if (left != -1 && a[i] != special)
                right = i;
        }

        int cntl = 0, cntr = 0;

        if (left != -1)
        {
            int current = a[left];

            if (current != special)
                cntl++;

            for (int i = left + 1; i < index - 1; i++)
            {
                if (a[i] != current)
                {
                    cntl++;
                    current = a[i];
                }
            }
        }

        if (right != -1)
        {
            int current = a[right];
            if (current != special)
                cntr++;

            for (int i = right - 1; i > index - 1; i--)
            {
                if (a[i] != current)
                {
                    cntr++;
                    current = a[i];
                }
            }
        }
        int ans = max(cntl, cntr);

        cout << (ans % 2 == 1 ? ans + 1 : ans) << endl;
    }
}