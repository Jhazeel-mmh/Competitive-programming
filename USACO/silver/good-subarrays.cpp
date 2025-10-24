#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;


        vector <int> pref(n+1);
        for (int i = 1; i <= n; i++){
            char x; cin >> x;

            pref[i] = pref[i-1] + (x - '0');
        }


        map <int, int> mp;
        long long cnt = 0;
        for (int i = 0; i <= n; i++){
            int res = pref[i] - i;
            if (mp.count(res)){
                cnt+= mp[res];
            }

            mp[res]++;
        }
        cout << cnt << '\n';
    }

}