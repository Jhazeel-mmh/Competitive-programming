#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while(_--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        vector <int> diff(n + 1);
        for (int i = 0; i < n; i++){
            if (a[i] > 0){
                diff[max(0, i - a[i] + 1)]++;
                diff[min(n, i + a[i])]--;
            }
        }


        vector <int> restricted(n);
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cnt+= diff[i];
            restricted[i] = cnt > 0;
        }

        bool isPossible = true;
        for (int i = 0; i < n; i++){
            if (a[i] >= 0){
                if (i + a[i] < n && !restricted[i + a[i]]) continue;
                if (i - a[i] >= 0 && !restricted[i - a[i]]) continue;
                isPossible = false; 
            }
        }

        if (!isPossible){
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) cout << (restricted[i] ? 0 : 1);
        cout << endl;

    }
}


/*
2
7
2 1 0 1 0 1 2
10
-1 1 -1 -1 1 1 -1 -1 2 -1

*/