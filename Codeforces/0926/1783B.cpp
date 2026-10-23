#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector <vector <int>> ans(n, vector <int> (n));
    
    int l = 1, r = n*n, t = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (t) ans[i][j] = l++;
            else ans[i][j] = r--;
            t ^= 1;
        }
        if (i & 1) reverse(ans[i].begin(), ans[i].end());
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " \n"[j == n -1];

        }
    }

}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
}