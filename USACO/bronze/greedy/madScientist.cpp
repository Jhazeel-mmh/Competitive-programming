#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;
    string a, b;
    cin >> a >> b;

    vector <bool> marcado(n); 
    int cnt = 0;
    for (int i = 0; i < n; i++){

        if (a[i] != b[i] && !marcado[i]){
            cnt++;
            for (int aux = i; aux < n; aux++){
                if (!marcado[aux] && a[aux] != b[aux]) marcado[aux] = true;
                else if (a[aux] == b[aux]) break;
            }
        }

    }

    cout << cnt << endl;
}