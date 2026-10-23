#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int x;
        cin >> x;
        
        int ans = INT32_MAX;


        while (x){
            ans = min(ans, x % 10);
            x = x / 10;
        }

        cout << ans << endl;
    }    
}