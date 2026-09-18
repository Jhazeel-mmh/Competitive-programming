#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >>k;
    vector <int> a(n);
    int ans = 0;
    for (int &x : a){
        cin >> x;
        if (x >= k) ans++;
    }
    cout << ans << endl;
}