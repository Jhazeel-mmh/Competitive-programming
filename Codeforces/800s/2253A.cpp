#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        ll x;
        cin >> x;
        x++;
        vector <int> p(x + 1, 1);

        for (ll i = 2; i <= x; i++){
            if (p[i]){
                for (ll j = i * i; j <= x; j += i){
                    p[j] = 0;
                }
            }
        }



        if (p[x]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}