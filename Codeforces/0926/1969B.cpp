#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    long long n = s.size();
    long long leftZeros = 0;

    for (long long i = 0; i < n; i++){
        if (s[i] == '0') leftZeros++;
        else break;
    }

    long long ans = 0;
    for (long long i = leftZeros; i < n; i++){
        if (s[i] == '0'){
            ans += i - leftZeros + 1;
            leftZeros++;
        }
    }

    cout << ans << endl;
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