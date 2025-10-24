#include <bits/stdc++.h>

using namespace std;

vector<int> parent, sizeq;
vector<bool> quitados;
int counter = 0;

void make_set(int v){
    parent[v] = v;
    sizeq[v] = 1;
}
int find_set(int v){
    if(parent[v] == v){
        return v;
    }
    //Path Compression
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(sizeq[a] < sizeq[b]){
            swap(a, b);
        }
        parent[b] = a;
        sizeq[a] += sizeq[b];
        counter--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    parent.resize(n + 1, 0);
    sizeq.resize(n + 1, 0);
    vector<vector <int>> graph(n+1);
    set<int> quitados;
    for(int i = 1; i <= n; ++i){
        make_set(i);
        quitados.insert(i);
    }

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector <int> query(n);
    for (auto &q : query) cin >> q;

    vector <bool> ans(n+1, false);

    for (int i = n-2; i >= -1; i--){
        quitados.erase(quitados.find(query[i+1]));
        counter++;
        for (auto e : graph[query[i+1]]){
            if (quitados.find(e) != quitados.end()) continue;
            union_sets(query[i+1], e);
        }

        if (counter <= 1){
            ans[i + 1] = 1;
        } else {
            ans[i + 1] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        if (ans[i]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}