#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    vector <int> x(n);
    for (auto &e : x) cin >> e;
    vector <int> y(n);
    for (auto &e : y) cin >> e;

    long long res = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            long long a, b, c;
            a = (x[i] - x[j]);
            b = (y[i] - y[j]);
            c = pow(a, 2) + pow(b, 2);
            res = max(res, c);
        }
    }

    cout << res << '\n';
}