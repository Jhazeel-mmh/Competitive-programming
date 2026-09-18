#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

  
    int tt;
    cin >> tt;
    while (tt--){
        long long n;
        cin >> n;

        vector <long long> pref(n), suff(n);

        for (auto &e: pref) cin >> e;
        for (auto &e: suff) cin >> e;

   
        
        vector <long long> ans(n);

        for (long long i = 0; i < n; i++){
            ans[i] = lcm(pref[i], suff[i]);
        }

        bool ok = true;
        if (pref[0] != ans[0]) ok = false;
        if (suff[n-1] != ans[n-1]) ok = false;

        for (long long i = 1; i < n; i++){
            if (gcd(pref[i-1], ans[i]) != pref[i]) ok = false;
        }

        for (long long i = n-2; i >= 0; i--){
            if (gcd(suff[i + 1], ans[i]) != suff[i]) ok = false;
        }



        cout << (ok ? "YES" : "NO") << endl;
    }    
}