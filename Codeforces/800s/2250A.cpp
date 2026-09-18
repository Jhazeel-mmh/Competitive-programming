#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e : a) cin >> e;

        if (n % 2 == 1){
            cout << "NO" << endl;
            continue;
        }

        int lo = a[1], hi = a[0];

        for (int i = 2; i < n - 1; i+=2){
            hi = min(hi, a[i]);
            lo = max(lo, a[i+1]);
        }
    
        cout << (hi - lo > 1 ? "YES" : "NO") << endl;

    }

}