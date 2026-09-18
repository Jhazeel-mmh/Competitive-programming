#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int tt;
    cin >> tt;
    while (tt--){
        int n, m;
        cin >> n >> m;
        vector <int> a(n), b(m);
        for (auto &e : a) cin >> e;
        for (auto &e : b) cin >> e;

        b.push_back(0);
        sort(b.begin(), b.end());

        vector <long long> pref(n+1);

        for (int i = 0; i < n; i++){
            pref[i+1] = pref[i] + a[i];
        }
        long long ans = 0;

        for (long long i = 1; i < m + 1; i++){
            ans += abs(pref[b[i]] - pref[b[i -1]]);
        }
        
        ans += pref[n] - pref[b.back()];

        cout << ans << endl;
    }    
}