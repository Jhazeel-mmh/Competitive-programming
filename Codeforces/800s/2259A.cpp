#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < s.size(); i+= k){
            int cnt = 0;
            for (int j = i; j < i + k && j < s.size(); j++){
                if (s[j] == '1') cnt++;
            }
            if (cnt == k) ans++;
        }

        cout << ans << endl;

    }

}