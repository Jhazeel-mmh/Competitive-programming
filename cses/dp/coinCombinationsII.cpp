#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
    int n, x;
    cin >> n >> x;
    vector <int> coins(n);
    for (auto &c : coins) cin >> c;
  
    vector <int> dp(x+1);
    dp[0] = 1;

    for (int c : coins){
        for (int i = 1; i <= x; i++){
            if (i - c >= 0){
                dp[i] += dp[i - c];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[x] << endl;
}