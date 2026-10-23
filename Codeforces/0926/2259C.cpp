#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while(_--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;
        int l = 0, r = n - 1;
        for (; l < n; l++){
            if (a[l] == 1) break;
        }

        for (;r >= 0; r--){
            if (a[r] == 1) break; 
        }

        for (int i = 0; i < n; i++){
            if (a[i] != -1) continue;

            if (l >= i) {
                a[i] = 1;
                break;
            }  
        }

        for (int i = n-1; i >= 0; i--){
            if (a[i] != -1) continue;

            if (r <= i) {
                a[i] = 1;
                break;
            }
        }


        for (auto x: a) cout << (x == -1 ? 0 : x ) << " ";
        cout << endl;
    }

}