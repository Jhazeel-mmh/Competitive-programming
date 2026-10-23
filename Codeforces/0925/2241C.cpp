#include <bits/stdc++.h>
using namespace std;
int  main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int changes = 0;

        char curr = 'a';
        for (char c : s){
            if (c != curr) {
                changes++;
                curr = c;
            }
        }

        if (changes == 1 || changes > 2) cout << 1 << endl;
        else cout << 2 << endl;
    }
}