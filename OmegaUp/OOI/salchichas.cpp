#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector <int> a(n, 0);
    vector <int> b(n, 0);
    for (int i = 0; i < n; i++){
        int si;
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    b[0] = a[0];
    for (int i = 1; i < n; i++){
        b[i] = a[i] + a[i - 1];
    }

    int resultado = 0;
    for (int i = 0; i < n; i++){
        if (b[i] > t){
            break;
        } else {
            resultado++;
        }
    }

    cout << resultado << endl;
}