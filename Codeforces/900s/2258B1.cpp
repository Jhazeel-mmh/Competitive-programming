#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n, m;
        cin >> n >> m;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        int ans = 0;
        for (int x = 1; x <= ceil((float) m / 2.0); x++){
            int currAns = 0;

            for (int i: a){
                if (i >= x) currAns++;
                if (i == 2*x) currAns++;
            }
            ans = max(currAns, ans);
        }
        cout << ans << endl;
    }
}