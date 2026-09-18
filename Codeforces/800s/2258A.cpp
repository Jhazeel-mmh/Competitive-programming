#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        cout << gcd(a[0], a[n- 1]) << endl;

    }

}