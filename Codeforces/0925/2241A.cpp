#include <bits/stdc++.h>
using namespace std;
int  main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int x, y;
        cin >> x >> y;

        if (x % y == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}