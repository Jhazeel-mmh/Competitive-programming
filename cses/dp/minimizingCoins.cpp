#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+5;
int main(){
    int n, x;
    cin >> n >> x;

    vector <int> coins(n);
    for (auto &e : coins) cin >> e;

    vector <int> dp(x+1, INF);
    dp[0] = 0;

    for (int i = 1; i <= x; i++){
        for (auto c : coins){
            if (i - c >= 0){
                dp[i] = min(dp[i - c] + 1, dp[i]);
            }
        }
    }

    if (dp[x] == INF){
        cout << -1 << endl;
        return 0;
    }

    cout << dp[x] << endl;
}