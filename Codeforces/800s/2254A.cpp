#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << min({abs(a -b), abs(a - c), abs(b - c)}) << endl;   
    }

}