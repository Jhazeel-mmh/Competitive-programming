#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int x, y;
        cin >> x >> y;

        bool notOk = x % 2 == 1 && y % 2 == 1;
        cout << (notOk ? "NO" : "YES") << endl;
    }


}