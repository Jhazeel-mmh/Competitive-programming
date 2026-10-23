#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _;
    cin >> _;
    while (_--){
        int n;
        cin >> n;

        vector <long long> a(n);
        
        int zeros = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == 0) zeros++;
        }

        if (!zeros){
            cout << - 1 << endl;
            continue;
        }

        if (zeros == n){
            for (auto e: a) cout << 1 << " ";
            cout << endl;
            continue;
        }

        map <long long,long long> auxMap;    
        for (auto par : a){
            auxMap[par]++;
        }
        vector <long long> pref, segmentLen;
        for (const auto& [key, value] : auxMap){
            pref.push_back(key);
            segmentLen.push_back(value);
        }


        bool ok = true;
        map <long long, long long> ans;
        long long maxAnsI = pref[1] / segmentLen[0];
        ok = pref[1] % segmentLen[0] == 0;
        ans[pref[0]] = maxAnsI;
        

        for (int i = 2; i < pref.size() && ok; i++){
            long long ansI = (pref[i] - pref[i-1]) / segmentLen[i -1];
            ok = (pref[i] - pref[i-1]) % segmentLen[i -1] == 0;
            if (ansI <= maxAnsI) ok = false;
            ans[pref[i -1]] = ansI;
            maxAnsI = ansI;
        }

        if (!ok){
            cout << - 1 << endl;
            continue;
        }

        ans[pref[pref.size() - 1]] = maxAnsI + 1; 

        for (auto par : a){
            cout << ans[par] << " ";
        }
        cout << endl;

    }


}