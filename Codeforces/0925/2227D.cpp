#include <bits/stdc++.h>
using namespace std;

int solve(int l, int r, int &n, vector <int> &A){
    set<int> mex;
    for (int i = 0; i <= n; i++) mex.insert(i);

    while (l >= 0 && r < 2*n && A[l] == A[r]){
        mex.erase(A[l]);
        l--; r++;
    }
    return *mex.begin();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector <int> a(2*n);
        int x = -1, y;
        for (int i = 0; i < 2*n; i++){
            cin >> a[i];
            if (a[i] == 0){
                if (~x) y = i;
                else x = i;                
            }
        }

        cout << (max({solve(x, x, n, a), solve(y,y,n,a), solve((x + y) / 2, (x + y  + 1) / 2, n, a)})) << endl;
    }
}