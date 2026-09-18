#include <bits/stdc++.h>
using namespace std;

void usaco(string name){
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
	freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

int main(){
    usaco("censor");
    string s, t;
    cin >> s >> t;

    string ans = "";

    for (char c: s){
        ans += c;
        if (ans.size() >= t.size()){
            if (ans.substr(ans.size() - t.size()) == t){
                ans.resize(ans.size() - t.size());
            }
        }
        
    }
    cout << ans << endl;
}