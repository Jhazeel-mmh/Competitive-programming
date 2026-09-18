#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        int ans = 0;

        int pos = 0, currValue = -1, currSegment = 0;
        while (pos < n){
            if (currValue != a[pos]){
                currSegment = 1;
                currValue = a[pos];
            } else if (currValue == a[pos]){
                currSegment++;
            }

            if (currValue == 0 && currSegment >= k){
                ans++;
                pos++;
                currSegment = 0;
                currValue = -1;
            }
            pos++;
        }

        cout << ans << endl;
    }    
}