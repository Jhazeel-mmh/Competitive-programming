#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;

        int alice = 0, bob = 0;

        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        alice += a1; bob += b1;
        alice += a2; bob += b2;

        if (alice > bob + k || alice == bob + k && a1 > b1 && a2 > b2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}