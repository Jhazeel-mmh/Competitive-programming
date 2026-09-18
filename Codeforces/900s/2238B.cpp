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

        long long ans = 0;

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                for (int k = 1; k <= n; k++){
                    long long a = gcd (lcm(i, j), lcm(j, k));
                    if (gcd(i, k) == a) ans++;
                }
            }
        }

        cout << ans << endl;


    }
}