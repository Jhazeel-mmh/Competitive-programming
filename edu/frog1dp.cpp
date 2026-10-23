#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;  
    vector <int> a(n), dp(n, INT32_MAX);
    for (int i = 0; i < n; i++) cin >> a[i];

    dp[0] = 0;
    
    for (int i = 0; i < n - 1; i++){
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(a[i] - a[i + 1]));
        
        if (i + 2 < n){
            dp[i + 2] = min(dp[i+2], dp[i] + abs(a[i] - a[i + 2]));
        }
    }



    cout << dp[n- 1] << endl;    
}