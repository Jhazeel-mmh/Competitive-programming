#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m;
    cin >> m;

    vector <long long> cnt(30, 0);


    while (m--){
        long long op, x;
        cin >> op >> x;

        if (op == 1){
            cnt[x]++;
        } else {
            long long acarreo = 0;
            bool posible = true;

            for (int i = 0; i < 30; i++){
                int ocupo = (x >> i) & 1;

                if (ocupo > cnt[i] + acarreo){
                    posible = false;
                    break;
                }

                acarreo = ((cnt[i] + acarreo) - ocupo ) /2;

            }

            cout << (posible ? "YES\n" : "NO\n");
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    solve();
}