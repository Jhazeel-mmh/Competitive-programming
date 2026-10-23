#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector <long long> a(n), suffMin(n);
    long long ans = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        ans += a[i];
    }

    suffMin[n - 1] = a[n-1];
    ans -= suffMin[n -1];
    for (int i = n - 2; i >= 0; i--){
        suffMin[i] = min(suffMin[i + 1], a[i]);
        ans -= suffMin[i];
    }


    long long mx = -1, curr = 1;
    for (int i = 1; i < n; i++){
        if (suffMin[i] == suffMin[i - 1]) curr++;
        else {
            mx = max(mx, curr);
            curr = 1;
        }
    }   
    
    mx = max(mx, curr);

    cout << ans + mx - 1 << endl;       
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
}