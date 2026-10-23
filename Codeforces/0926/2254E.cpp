#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin >> n;
        multiset <long long> b;

        for (long long i = 0; i < n; i++){
            long long x; cin >> x;
            b.insert(x);
        }

        vector <long long> ans(n);
        long long curr = 0;

        for (long long i = 0; i < n; i++){
            auto it = b.lower_bound(1 - curr);
            if (it == b.end()) return void(cout << -1 << '\n'); 
            curr += *it;
            b.erase(it);
            ans[i] = curr;
        }   


        for (long long i = 0; i < n; i++) cout << ans[i] << " ";
        cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
}