#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int a, b, x;
        cin >> a >> b >> x;

        int ans = INT32_MAX;

        int i = 0; 
        while (a != b){
            if (a < b) swap(a, b);

            ans = min(ans, abs(a-b) + i);

            a /= x;
            i++;
        }

        ans = min(ans, i);

        cout << ans << endl;

    }

}
