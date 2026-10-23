#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    set <char> curr;
    string ans = "";
    for (int i = 0; i < n; i++){
        if (curr.count(s[i])){
            ans.push_back(s[i]);
            curr.clear();
        } else {
            if (!curr.size())curr.insert(s[i]);
        }

    }

    cout << ans << endl;
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