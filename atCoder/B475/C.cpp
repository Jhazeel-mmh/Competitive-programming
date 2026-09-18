#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, s, L;
    cin >> n >> s >> L;
    
    vector <long long> a(n);
    for (int i = 1; i < n; i++) cin >> a[i];


    vector <long long> pref(n + 1, 0);
    for (int i = 1; i <= n-1; i++){
        pref[i + 1] = pref[i] + a[i];
    }


    auto dist = [&](int u, int v) -> long long {
        return abs(pref[u] - pref[v]);
    };

    int max_towns = 1;

    for (int l = 1; l <= s; l++){
        for (int r = s; r <= n; r++){
            long long lr = dist(l, r); 
            long long retorno = min(dist(s,l), dist(s,r));

            if (retorno + lr <= L){
                max_towns = max(max_towns, r- l + 1);
            }
        }
    }

    cout << max_towns << endl;
}