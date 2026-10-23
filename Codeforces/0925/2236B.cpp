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
        string s;
        cin >> s;

        vector <int> parity(k, 0);

        for (int i = 0; i < n; i++){
            if (s[i] == '1'){
                parity[i % k]++;
            }
        }

        bool ok = true;
        for (int i = 0; i < k; i++){
            if (parity[i] % 2 == 1){
                ok = false;
                break;
            }
        }
    
        cout << (ok ? "YES" : "NO") << endl;
    }

}

/*
1
10 3
1010101101

*/