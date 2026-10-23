#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    ll n, x;
    cin >> n >> x;
    map <ll, int> pref;
    pref[0]++;
    ll sum = 0, ans = 0;

    for (int i = 0; i < n; i++){
        ll ai;
        cin >> ai;
        sum += ai;
        ans += pref[sum-x];
        pref[sum]++;
    }

    cout << ans << endl;


}