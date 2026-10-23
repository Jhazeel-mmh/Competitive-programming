#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n <= 3) return void(cout << n << endl);
    else cout << n % 2 << endl;
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