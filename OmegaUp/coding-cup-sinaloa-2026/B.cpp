#include <bits/stdc++.h>
using namespace std;
vector <string> a;
int r, c;

vector <int> directionsX = {-1, -1, -1, 0, 0, 1, 1, 1};
vector <int> directionsY = {-1, 0, 1, -1, 1, -1, 0, 1};


bool dfs(pair <int, int> pos, char clr, vector <vector <bool>> &visited){
    if (visited[pos.first][pos.second] || a[pos.first][pos.second] == '0') return 0;
    visited[pos.first][pos.second] = true;

    for (int i = 0; i < 8; i++){
        int row = pos.first + directionsX[i];
        int col = pos.second + directionsY[i];

        if (row >= 0 && row <= r - 1 && col >= 0 && col <= c - 1 && clr == a[row][col]) dfs(make_pair(row, col), clr, visited);
    }

    return 1;
}   
   
int main(){
    cin >> r >> c;
    a.resize(r);

    vector <vector <bool>> visited(r, vector <bool> (c, false));
    for (int i = 0; i < r; i++) cin >> a[i];

    int ans = 0;

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (visited[i][j]) continue;

            ans += dfs(make_pair(i, j), a[i][j], visited);

        }
    }

    cout << ans << endl;
}