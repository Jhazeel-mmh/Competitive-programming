#include <bits/stdc++.h>
using namespace std;

vector <string> cows = {
    "Bessie", 
    "Buttercup", 
    "Belinda", 
    "Beatrice", 
    "Bella", 
    "Blue", 
    "Betsy", 
    "Sue"
};

void usaco(string name){
    string inp = name + ".in";
    string out = name + ".out";
    freopen(inp.data(), "r", stdin);
	freopen(out.data(), "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
}

int main(){
    usaco("lineup");
    int n;
    cin >> n;

    vector <pair <string, string>> constraints(n);
    for (auto &e : constraints){
        string i1, i2, i3, i4;
        cin >> e.first;
        cin >> i1 >> i2 >> i3 >> i4;
        cin >> e.second;
    }

    sort(cows.begin(), cows.end());

    vector <vector <string>> valid;
    do {
        bool ok = true;
        for (auto c : constraints){
            for (int i = 0; i < cows.size(); i++){
                if (cows[i] == c.second && (cows[i-1] != c.first && cows[i+1] != c.first)) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok)
        valid.push_back(cows);

    } while (next_permutation(cows.begin(), cows.end()));

    
    for (auto s : valid[0]){
        cout << s << '\n';
    }
}
