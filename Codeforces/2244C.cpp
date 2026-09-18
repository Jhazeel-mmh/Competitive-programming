#include <bits/stdc++.h>
using namespace std;




void dfs(int u, int componentId, vector <vector <int>> &grap, vector <int> &component){
    if (component[u] != 0) return;
    component[u] = componentId;

    for (auto vec : grap[u]){
        if (component[vec] == 0){
            dfs(vec, componentId, grap, component);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);  
    int tt;
    cin >> tt;
    while (tt--){
        int n, x, y;
        cin >> n >> x >> y;

        vector <int> component(n+1);

        vector <int> a(n + 1);
        vector <vector <int>> graph(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n - x; i++){
            graph[i].push_back(i + x);
            graph[i + x].push_back(i);
        }

        for (int i = 1; i <= n - y; i++){
            graph[i].push_back(i + y);
            graph[i + y].push_back(i);
        }

        int componentId = 1;
        for (int i = 1; i <= n; i++){
            if (component[i] == 0){
                dfs(i, componentId, graph, component);
                componentId++;
            }
        }

        bool ok = true;
        for (int i = 1; i <= n; i++){
            if (component[i] != component[a[i]]){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }    
}