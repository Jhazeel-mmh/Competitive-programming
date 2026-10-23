#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, q;
    cin >> n >> q;
    vector <int> a(n);     
    // for (int i = 1; i <= n; i++) cin >> a[i];
    for (auto &e: a) cin >> e;

    vector <ll> pref(n+1);

    for (int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + a[i-1];
    }

    while (q--){
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << endl;
    }

}


