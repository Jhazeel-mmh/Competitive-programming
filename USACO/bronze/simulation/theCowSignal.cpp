#include <bits/stdc++.h>
using namespace std;
void setIO(string name)
{
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
    freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}
int main()
{
    setIO("cowsignal");
    int m, n, k;
    cin >> m >> n >> k;

    vector <string> a(m);
    for (auto &e : a) cin >> e;

    vector <vector <char>> ans((m*k), vector <char> (n*k, '.'));


    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            for (int h = i*k; h < (i*k) + k; h++){
                for (int l = j*k; l < (j*k) + k; l++){
                    ans[h][l] = a[i][j];
                    // printf("(%d %d)", h, l);
                }
            }
        }
    }

    for (auto row : ans){
        for (auto cell : row){
            cout << cell;
        }
        cout << endl;
    }

}