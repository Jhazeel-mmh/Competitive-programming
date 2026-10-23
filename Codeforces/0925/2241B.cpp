#include <bits/stdc++.h>
using namespace std;
int  main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int x;
        cin >> x;

        int y = 1;
        while (x){
            y *= 10;
            x /=10;
        }

        cout << y + 1 << endl;
    }
}