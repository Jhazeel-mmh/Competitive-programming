#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;


    vector <set <int>> dp(30 + 1, set <int> ());

    if (n == k) return void(cout << 0 << endl);

    dp[0].insert(n);
    for (int i = 1; i <= 30; i++){

        for (int x : dp[i -1]){
            int odd_i = ceil((double) x / 2.0);
            int even_i = x /2;
            
            if (odd_i == k || even_i == k){
                return void(cout << i << endl);
            }

            dp[i].insert(even_i);
            if (x % 2 == 1) dp[i].insert(odd_i);
           
        }
    }

    cout << -1 << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }


}   