#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n, m; cin >> n >> m;
    vector <vector <char>> conManchas(n, vector <char> (m));
    vector <vector <char>> sinManchas(n, vector <char> (m));

    for (auto &v : conManchas)
        for (auto &g : v) cin >> g;

    for (auto &v : sinManchas)
        for (auto &g : v) cin >> g;

    vector <bool> gen(m, true);

    for (int col = 0; col < m; col++){

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (conManchas[i][col] == sinManchas[j][col]) {
                    gen[col] = false; 
                    break;
                }
            }

            if (!gen[col]) break;
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) if (gen[i]) cnt++;
    cout << cnt << '\n';
}