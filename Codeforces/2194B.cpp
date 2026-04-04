#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n, x, y;
        cin >> n >> x >> y;

        long long Sall = 0;
        vector <long long> a(n);
        vector <long long> si(n);
        for (int i = 0; i < n; i++) {
           cin >> a[i];
            si[i] = a[i] / x;
            Sall += si[i];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++){
            ans = max(ans, a[i] + (Sall - si[i]) * y);

        }
        cout << ans << endl;
    }
}