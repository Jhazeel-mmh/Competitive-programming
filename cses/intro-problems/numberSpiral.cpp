#include <bits/stdc++.h> 
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while (tt--){
        long long x, y;
        cin >> x >> y;

        long long mx = max(x, y);
        long long upper = mx * mx,
        low = (mx - 1) * (mx - 1) + 1;

        if (mx & 1){
            if (x > y)cout << low - 1 + y << endl;
            else if (y > x) cout << upper - x + 1 << endl;
            else cout << (upper + low) / 2 << endl;
            continue;
        }


        if (x > y) cout << upper + 1 - y << endl;
        else if (y > x)cout << low - 1 + x << endl;
        else cout << (upper + low) / 2 << endl;
    }
}