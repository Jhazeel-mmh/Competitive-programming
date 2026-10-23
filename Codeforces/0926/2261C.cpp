#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    int odd = 0, even = 0;
    for (auto &e : a){ 
        cin >> e;
        if (e & 1) odd++;
        else even++;
    }


    if (odd % 2 == 0 || n == 1 || odd > 2 && even || !even && odd >= 5) cout << "Moggity" << endl;
    else cout << "Larpity" << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }


}