#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int rows, cols; cin >> rows >> cols;

    vector <vector <char>> spotty(rows, vector <char> (cols));
    vector <vector <char>> plain(rows, vector <char> (cols));

    for (auto &v : spotty)
        for (auto &s : v) cin >> s;

    for (auto &v : plain)
        for (auto &s : v) cin >> s;


    int cnt = 0;
    for (int r = 0; r < rows; r++){


        for (int c1 = 0; c1 < cols; c1++){
            for (int c2 = c1+1; c2 < cols; c2++){
                for (int c3 = c2+1; c3 < cols; c3++){
                    bool unique = true;

                    for (int r2 = 0; r < rows; r++){
                        if (spotty[r][c1] == plain[r2][c1] && spotty[r][c2] == plain[r2][c2] &&
                            spotty[r][c3] == plain[r2][c3]) unique = false;
                    }

                    if (unique) cnt++;
                    
                }
            }
        }

    }

    cout << cnt << endl;

}