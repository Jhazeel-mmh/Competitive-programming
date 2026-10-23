#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while (_--){
        int n; cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;
        sort(a.begin(), a.end());
        int ans = 1, curr = a[n - 1]; 

        for (int i = n - 2; i >= 0; i--){
            if (a[i] == curr) ans++;
        }

        cout << ans << endl;

    }

}