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

int solve(int r, int c, vector <string> &grid){
    int n = grid.size();
    vector <char> cells = {grid[r][c], grid[n - 1 - r][c], grid[r][n-1-c], grid[n - 1 - r][n - 1- c]};

    int ans = 0;
    for (char c: cells){
        if (c == '#') ans++;
    }
    return min(ans, 4 - ans);
}   

int main(){
    int n, u;
    cin >> n >> u;
    vector <string> grid(n);
    for (auto &s: grid) cin >> s;

    int ans = 0;

    for (int i = 0; i < n/2; i++){
        for (int j = 0; j < n/2; j++){
            ans += solve(i, j, grid);
        }
    }

    cout << ans << endl;

    while(u--){
        int r, c;
        cin >> r >> c;
        r--; c--;
        ans -= solve(r, c, grid);
        grid[r][c] = (grid[r][c] == '#' ? '.' : '#');
        ans += solve(r, c, grid);
        cout << ans << endl;
    }


}