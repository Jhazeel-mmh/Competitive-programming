#include <bits/stdc++.h>
using namespace std;
int  main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        long long n;
        cin >> n;
        vector <long long> a(n), b(n);
        for (auto &e : a) cin >> e;
        for (auto &e : b) cin >> e;


        if (n == 1 && a[0] > b[0]){
            cout << "NO" << endl;
            continue;
        } else if (n == 1) {
            cout << "YES" << endl;
            continue;
        } 


        for (long long i = n - 1; i >= 0; i--){
            if (a[i] == b[i]) continue;

            if (a[i] < b[i]){
                a[i] = b[i];
                continue;
            }

            if (i >= 1 && a[i] > b[i]){  
                a[i - 1] += a[i] - b[i];
                a[i] = b[i];
            }   
        }


        cout << (a == b ? "YES" : "NO" ) << endl;
    }
}