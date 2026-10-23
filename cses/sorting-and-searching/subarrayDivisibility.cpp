#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin >> n;
    map <ll, int> pref;
    ll sum = 0, ans = 0;

    pref[0]++;
    for (int i = 0; i < n; i++){
        ll ai;
        cin >> ai;
        sum += ai;
        ans += pref[((sum%n) + n)%n];
        pref[((sum%n) + n)%n]++;
    }


    cout << ans << endl;
}