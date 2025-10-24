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
    usaco("blocks");
    int n;
    cin >> n;

    vector <pair <string, string>> cards(n);
    for (auto &e : cards) cin >> e.first >> e.second;

    vector <int> f(26, 0);
    vector <vector <vector <int>>> frecuency(n, vector <vector <int>> (2, vector <int> (26, 0)));

    for (int i = 0; i < n; i++){
        
        string cardo = cards[i].first;
        for (char c : cardo){
            frecuency[i][0][c - 'a']++;
        }

        string cardo2 = cards[i].second;
        for (char c : cardo2){
            frecuency[i][1][c - 'a']++;
        }

        for (int j = 0; j < 26; j++){
            f[j] += max(frecuency[i][0][j], frecuency[i][1][j]);
        }

    }

    for (int c = 0; c < 26; c++){
        cout << f[c] << '\n';
    }
}