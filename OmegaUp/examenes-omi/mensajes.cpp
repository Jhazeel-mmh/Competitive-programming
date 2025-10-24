#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long n, k; cin >> n >> k;

    vector <long long> cuarteles(n);
    for (auto &e : cuarteles) cin >> e;

    long long centrales = 0; 
    long long total = 0;

    for (int i = 0; i < n; i++){
        if (cuarteles[i] > k){
            centrales++;
            cuarteles[i] = 0;
        } else {
            total += cuarteles[i];
        }
    }

    sort(cuarteles.rbegin(), cuarteles.rend());
    if (!centrales){
        total -= cuarteles[0];
        total += k;
    } else {
        total += (k * centrales);
    }


    cout << total << endl;

}