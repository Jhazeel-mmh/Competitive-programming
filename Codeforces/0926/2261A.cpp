#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = 0, mn = n, cnt = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1'){
            mn = min(mn, i);
            mx = max(mx, i);
            cnt++;
        }
    }

    if (cnt <= 2){
        cout << cnt - 1 << endl;
    } else cout << mx - mn << endl;

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