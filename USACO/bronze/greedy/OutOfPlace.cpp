#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;

    vector <int> cowsHeights(n);
    for (auto &h : cowsHeights) cin >> h;

    int cnt = 0;
    for (int i = 0; i < cowsHeights.size(); i++){
        int minimum = INT32_MAX, indice = 0;
        for (int j = i+1; j < cowsHeights.size(); j++){
            if (cowsHeights[i] <= cowsHeights[j]) continue;

            if (cowsHeights[j] < minimum){
                indice = j;
                minimum = cowsHeights[j];
            } else if (cowsHeights[j]  == minimum){
                if (indice < j){
                    indice = j;
                    minimum = cowsHeights[j];
                } 
            }
        }
        if (minimum != INT32_MAX){
            cnt++;
            swap(cowsHeights[i], cowsHeights[indice]);
        }
    }

    cout << cnt << endl;
}