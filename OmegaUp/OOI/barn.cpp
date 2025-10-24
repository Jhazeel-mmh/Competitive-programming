#include <bits/stdc++.h>
using namespace std;
int main(){    
    int m, s, c;
    cin >> m >> s >> c;
    vector <int> pecebras(c);

    if (m >= c){
        cout << c << endl;
        return 0;
    }

    for (int i = 0; i < c; i++){
        cin >> pecebras[i];
    }

    sort(pecebras.begin(), pecebras.end());
    int rango = pecebras[c - 1] - pecebras[0] + 1;
    vector <int> diferencias;
    for (int i = 1; i < c; i++){
        int diferenciaI = pecebras[i] - pecebras[i - 1] - 1;
        diferencias.push_back(diferenciaI);
    }

    sort(diferencias.rbegin(), diferencias.rend());

    for (int i = 0; i < m - 1; i++){
        rango -= diferencias[i];
    }

    cout << rango << endl;
}