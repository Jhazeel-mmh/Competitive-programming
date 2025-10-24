#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, Q;
    cin >> T >> Q;
    string palabra;
    cin >> palabra;
    vector <int> prefixSum(T, 0);
    for (int i = 1; i < T; i++){
        if (palabra[i-1] == palabra[i]){
            prefixSum[i] += prefixSum[i-1] + 1;
        } else {
            prefixSum[i] = prefixSum[i-1];
        }
    }

    while (Q--){
        int a, b; cin >> a >> b;
        cout << (prefixSum[b - 1] - prefixSum[a - 1]) << '\n';
    }
}