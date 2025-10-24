#include <bits/stdc++.h>
using namespace std;

void a(){
    freopen("taming.in", "r", stdin);
	freopen("taming.out", "w", stdout);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    a();
    int n; cin >> n;
    vector <int> breakouts(n);
    for (auto &s : breakouts) cin >> s;


    int currentBreakout = -1; 
    for (int i = n-1; i >= 0; i--){

        int x = breakouts[i];

        if (currentBreakout != -1){
            if (x != -1){
                if (x != currentBreakout){
                    cout << -1 << endl;
                    return 0;
                }
            }
            currentBreakout--;
        } else if (x != -1 && x != 0){
            currentBreakout = breakouts[i] - 1;
        }
    }


    int cnt = 1, posibles = 0, prev = 0;
    for (int i = 1; i < n; i++){

        if (breakouts[i] == -1){
            posibles++;
            prev = breakouts[i];
        }
        else {
            if (prev == -1 && breakouts[i] != 0){
                int m = breakouts[i], j = i-1;
                while (j >= 0 && m){
                    if (breakouts[j] == -1){
                        posibles--;
                        j--; m--;
                    } else{
                        break;
                    }
                }
                if (!m) cnt++;
                prev = breakouts[i];
            } else if (breakouts[i] == 0){
                cnt++;
            } 
        }
    }

    cout << cnt << " " << (cnt + posibles) << '\n';
}