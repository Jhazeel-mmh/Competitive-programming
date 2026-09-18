#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        string s;
        cin >> s;
        string ans = "";

        bool alice = false, bob = false;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0' && !alice){
                alice = true;
                continue;
            } else if (s[i] == '1' && !bob){
                bob = true;
                continue;
            } else ans += s[i];
        }

        cout << ans << endl;
    }

}