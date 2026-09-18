#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
      vector <int> a(3);
      for (auto &e: a) cin >> e;
        sort(a.begin(), a.end());

        int ansA = max({a[0], a[1], a[2]}) - min({a[0], a[1], a[2]});
        int ansB = max({a[0], a[1], a[0] + a[1]}) - min({a[0], a[1], a[0] + a[1]});
        cout << min(ansA, ansB) << endl;
    }

}