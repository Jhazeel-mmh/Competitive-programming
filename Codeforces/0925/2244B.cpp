#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;

        vector <long long> a(n);
        for (auto &e : a) cin >> e;

        bool ok = true;
        int val = 1;
        for (int i = 0; i < n - 1; i++){
             if (a[i] > (val + i)){
                a[i + 1] += a[i] - (val + i);
                a[i] = val + i;
            }           
        }

        for (int i = 0; i < n - 1; i++){
            if (a[i] >= a[i + 1]) ok = false;
        }


        cout << (ok ? "YES" : "NO") << endl;
        
    }    
}