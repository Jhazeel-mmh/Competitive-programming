#include <bits/stdc++.h>
using namespace std;

const int n = 8;
vector <vector <char>> chessboard(n, vector <char> (n));
vector <bool> cols(n, false), 
diag1(2*n-1, false),
diag2(2*n-1, false);
int cnt = 0;

void backtraking(int y){
    if (y == n){
        cnt++;
        return;
    }
    for (int x = 0; x < n; x++){
        if (cols[x] || diag1[x+y] || diag2[x-y+n-1] || chessboard[y][x] == '*') continue;
        cols[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        backtraking(y+1);
        cols[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main(){
    for (auto &row : chessboard){
        for (auto &e : row) cin >> e;
    }

    backtraking(0);
    cout << cnt << '\n';
}