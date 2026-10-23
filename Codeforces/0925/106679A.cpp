#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <long long> c(n+1), v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> c[i] >> v[i];
        c[i] += c[i - 1];
        v[i] += v[i - 1];
    }
    int q;
    cin >> q;

    while (q--){
        int qi;
        cin >> qi;
        double l = (double)(c[qi] - v[qi]) / (double)(c[qi] + v[qi]);
        cout << (l > 0 ? "COMPRA" : l < 0 ? "VENDA" : "NEUTRO") << endl;
    }   



}