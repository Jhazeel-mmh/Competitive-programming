#include <bits/stdc++.h>
using namespace std;

// int criba(vector <bool> &primes, int r){
//     int cnt = 0;
//     for (int i = 2; i <= r; i++){
//         if (primes[i]){
//             cnt++;
//             for (int j = i * i; j <= r; j+= i) primes[j] = false;
//         }
//     }
//     return cnt;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;

        cout <<  (l == 1 && r == 1 ? 1 : r  - l) << endl;

    }


}