#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n, k;
        cin >> n >> k;

        k--;
        vector <int> t(n);
        for (auto &e: t) cin >> e;

        int curretLevel = t[k], water = 1;

        sort(t.begin(), t.end());

        int indexStart = 0;
        for (int i = 0; i < n; i++) if (t[i] == curretLevel) indexStart = i;

        if (indexStart == n - 1){
            cout << "YES" << endl;
            continue;
        }
        
        bool ok = true;
        for (int next = indexStart + 1; next < n; next++){
            if (t[next] - curretLevel > curretLevel - water + 1){
                ok = false;
                break;
            } else {
                water += t[next] - curretLevel;
                curretLevel = t[next];
            }
        }

        cout << (ok ? "YES" : "NO") << endl;

    }    
}