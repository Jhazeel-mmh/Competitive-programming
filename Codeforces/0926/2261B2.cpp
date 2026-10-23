#include <bits/stdc++.h>
using namespace std;

vector <long long> BN;

void solve(){
    int n;
    cin >> n;
    vector <long long> a(n);
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long mx = a[n - 1], mn = a[0];

    if (mx == mn) return void (cout << mx << endl);



    if (mx - mn >= 2) {
        
        int idxMx = -1, idxMn = -1;

        for (int i = 0; i < BN.size(); i++){
            if (mx >= BN[i]){
                idxMx = i;
            }

            if (mn >= BN[i]){
                idxMn = i;
            }
        }

        long long ans = 0;
        if (idxMx - idxMn <= 1){
            for (long long i = mn; i < mx; i++) ans = max(ans, mx | i);
            return void(cout << ans << endl);
        } else if (idxMx - idxMn > 1){

            for (long long i = BN[idxMx - 1]; i < mx; i++) ans = max(ans, mx | i);
            return void(cout << ans << endl);
        }

        
    } else cout << (mx|mn) << endl;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    for (long long a = 1; a <= 10e10; a*=2) BN.push_back(a);

    while(tt--){        
        solve();
    }
}