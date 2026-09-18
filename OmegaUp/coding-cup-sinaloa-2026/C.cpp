#include <bits/stdc++.h>
using namespace std;

struct Node{
    int precio;
    int index;
};


void dfs(Node node, vector <vector <pair<int,int>>> &graph ,vector <bool> &visited, vector <Node> &nodes, long long &ans){
    if (visited[node.index]) return;
    visited[node.index] = true;

    ans += node.precio;
    for (auto vecinos : graph[node.index]){
        for (Node &x: nodes){
            if (x.index != vecinos.first)  continue;

            ans += min(x.precio, vecinos.second);
            x.precio = 0;
            dfs(x, graph, visited, nodes, ans);
        }
    }
}   
   
int main(){
    int n, m;
    cin >> n >> m;

    vector <Node> nodes(n);
    for (int i = 0; i < n; i++){
        cin >> nodes[i].precio;
        nodes[i].index = i;
    }

    vector <bool> visited(n, false);
    vector <vector <pair<int,int>>> graph(n);

    while (m--){
        int a, b, w;
        cin >> a >> b >> w;
        graph[a-1].push_back({b-1, w});
        graph[b-1].push_back({a-1, w});
    }

    vector <Node> b(nodes.begin(), nodes.end());
    std::sort(b.begin(), b.end(), [&](Node a, Node b){
        return a.precio < b.precio;
    });

    long long ans = 0;
    dfs(b[0], graph,visited, nodes, ans);

    for (int i = 0; i < n; i++){
        dfs(nodes[i], graph,visited, nodes, ans);
    }

    cout << ans - 1 << endl;
}