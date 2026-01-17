#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (auto &e : A)
        cin >> e;
    for (auto &e : B)
        cin >> e;

    int correctcnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == B[i])
            correctcnt++;
    }

    vector<int> operations(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int l = i, r = i;
        int cnt = 0;

        while (l >= 0 && r < n)
        {
            if (A[l] == B[r])
                cnt++;
            if (A[r] == B[l])
                cnt++;
            if (A[l] == B[l])
                cnt--;
            if (A[r] == B[r])
                cnt--;

            operations[cnt + correctcnt]++;

            l--;
            r++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        int l = i - 1, r = i;
        int cnt = 0;

        while (l >= 0 && r < n)
        {
            if (A[l] == B[r])
                cnt++;
            if (A[r] == B[l])
                cnt++;
            if (A[l] == B[l])
                cnt--;
            if (A[r] == B[r])
                cnt--;

            operations[cnt + correctcnt]++;

            l--;
            r++;
        }
    }

    for (auto &e : operations)
        cout << e << '\n';
}