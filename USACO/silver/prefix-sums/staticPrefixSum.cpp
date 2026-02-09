#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> nums(n);
    for (auto &e : nums)
        cin >> e;

    vector<long long> prefix(n + 1, 0);

    for (long long i = 1; i <= n; i++)
        prefix[i] = nums[i - 1] + prefix[i - 1];

    while (q--)
    {
        long long l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l] << endl;
    }
}