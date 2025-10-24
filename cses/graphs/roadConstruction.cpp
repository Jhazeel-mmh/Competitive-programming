#include <bits/stdc++.h>

using namespace std;

vector<int> parent, sizeq;
int maxSize = 0, counter;

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
        maxSize = max(sizeq[a], maxSize);
        counter--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    counter = n;
    parent.resize(n + 1, 0);
    sizeq.resize(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        make_set(i);
    }
    for(int i = 1; i <= m; ++i){
        int a, b;
        cin >> a >> b;
        union_sets(a, b);
        cout << counter << " " << maxSize << "\n";
    }
    return 0;
}