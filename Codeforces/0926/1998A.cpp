#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;

    vector <pair <long long, long long>> a;
    a.push_back({x*k, y*k});


    for (long long i = 100001; a.size() < k; i++){
        if (a.size() + 2 <= k){
            a.push_back({i, 0});
            a.push_back({-i, 0});
            continue;
        }

        a.back().first+= i;
        a.push_back({-i, 0});

    }

    for (auto [f,s]: a) printf("%lld %lld\n", f, s);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
}