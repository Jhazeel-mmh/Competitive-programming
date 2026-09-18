#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
       int n, m;
       cin >> n >> m;
        vector <string> a(n), b(m);
        for (auto &e: a) cin >> e;
        for (auto &e: b) cin >> e;

        set <char> abrev;
        for (auto &s: a){
            abrev.insert(char(s[0] - 32));
        }   

        bool ok = true;
        for (string s: b){
            for (char c : s){
                if (!abrev.count(c)){
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ?"YES": "NO" ) << endl;
    }

}