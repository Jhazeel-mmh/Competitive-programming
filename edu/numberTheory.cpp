#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using namespace std;

void sieve(ll n, vector <ll> &primes){
    vector <ll> p(n + 1, 1);

    for (int i = 2; i <= n; i++){
        if (p[i]){
            for (int j = i * i; j <= n; j+=i){
                p[j] = 0;
            }
        }
    }

    for (ll i = 2; i <=n; i++){
        if (p[i]) primes.push_back(i);
    }
}

int main(){
    map <ll, ll> m;
    ll n, M;
    cin >> n>> M;

    vector <ll> v(n), primes;
    for (ll i = 0; i < n; i++) cin >> v[i];


    sieve(M, primes);

    for (auto e: primes){
        ll num = M, res = 0;
        while (num > 0){
            num /= e;
            res += num;
        }
        m[e] = res;
    }

    for (ll i = 0; i < n; i++){
        map <ll, ll> fact;

        for (ll j = 2; j*j <= v[i]; j++){
            ll ct = 0;
            while ( v[i] % j == 0){
                v[i] /= j;
                ct++;
            }
            if (ct > 0) fact[j] = ct;
        }

        if (v[i] > 1) fact[v[i]] = 1;

        for (auto e: m){
            fact[e.first] += e.second;
        }

        ll ans = 1;
        for (auto e : fact){
            ll x = e.second + 1;
            ans = (ans * x) % mod; 
        }

        cout << ans << endl;
    }

    


}