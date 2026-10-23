#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int ans = 0;
    while (n){
        if (n > 2){
            n -= 2;
            ans++;
        } else break;
    }
    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
}