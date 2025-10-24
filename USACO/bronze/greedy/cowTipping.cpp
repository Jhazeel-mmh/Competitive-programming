#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);

    int n; cin >> n;
    vector <vector <char>> cows(n, vector <char> (n));

    for (auto &vec : cows){
        for (auto &c : vec){
            cin >> c;
        }
    }

    int cnt = 0;
    for (int i = n-1; i >= 0; i--){
        for (int j = n-1; j >= 0; j--){

            if (cows[i][j] == '1'){
                cnt++;
                for (int r = i; r >= 0; r--){
                    for (int c = j; c >= 0; c--){
                        cows[r][c] = ((cows[r][c] == '1')  ? '0' : '1');
                    }
                }
            }


        }
    }


    cout << cnt << endl;

}