#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, r, c;
    cin >> n >> r >> c;
    vector <int> b(n*n, 0);
    for (auto &e: b) cin >> e;

    
    sort(b.begin(), b.end());

    vector <int> a;
    int sum = *b.begin();
    for (int i = 0; i < n; i++){
        int aux = sum;
        a.push_back(aux);
        for (int j = 1; j < n; j++){
            aux += c;
            a.push_back(aux);
        }
        sum += r;
    }


    sort(a.begin(), a.end());

    cout << (a == b ? "YES" : "NO") << endl;


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
}