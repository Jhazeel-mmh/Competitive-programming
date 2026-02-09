#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> &v, int target){
    int inicio = 1, final = v.size();
    while (inicio <= final){
        int m = inicio + (final - inicio) / 2;
        if (v[m] == target) return m;
        if (v[m] > target) final = m - 1;
        else inicio = m + 1;
    }
    return -1;
}

int main(){
    int n; cin >> n;
    vector <int> p(n);
    for (auto &s: p) cin >> s;
    vector <int> pref(n+1);
    for (int i = 1; i <= n; i++){
        pref[i] = p[i-1] + pref[i-1];
    }

    int distance = pref[n] / 3;

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        int current = pref[i];
        int d1 = binarySearch(pref, (current+distance)),
        d2 = binarySearch(pref, (current + (2*distance)));

        if (d1 != -1 && d2 != -1) cnt++;
    } 
    cout << cnt << endl;
}