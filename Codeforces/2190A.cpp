#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string b(s.begin(), s.end());
        sort(b.begin(), b.end());

        if (s == b)
        {
            printf("Bob\n");
        }
        else
        {
            vector<int> idx;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != b[i])
                    idx.push_back(i);
            }
            printf("Alice\n");
            printf("%d\n", (int)idx.size());
            for (int i : idx)
                printf("%d ", i + 1);
            printf("\n");
        }
    }
}