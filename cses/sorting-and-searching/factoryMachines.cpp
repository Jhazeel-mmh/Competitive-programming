#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool valid(ll t, vector <ll> &m, ll &p){
    ll cnt = 0;
    for (auto e : m){
        cnt += t / e;
        if (cnt >= p) return true;
    }
    return false;
}

int main(){
    ll n, p;
    cin >> n >> p;
    
    vector <ll> m(n);
    for (auto &e: m) cin >> e;

    ll lo = 1, hi = INT64_MAX - 100;
    ll ans = INT64_MAX;
    while (lo <= hi){
        ll mid = lo + (hi - lo) / 2;

        if (valid(mid, m, p)){
            hi = mid - 1;
            ans = min(ans, mid);
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << endl;

}
