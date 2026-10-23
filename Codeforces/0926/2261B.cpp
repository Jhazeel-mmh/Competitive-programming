#include <bits/stdc++.h>
using namespace std;

vector <long long> binaryNumbers;

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
            


    } else cout << (mx|mn) << endl;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    // for (long long a = 1; a <= 10e9; a*=2) binaryNumbers.push_back(a);

    while(tt--){        
        solve();
    }
}