#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    if (n <= 1){
        cout << 0 << endl;
        return 0;
    }

    vector <int> azul(2, -1);
    cin >> azul[0] >> azul[1];

    vector <vector < vector <int>>> casa(n, vector <vector <int>>(n, vector<int> (2)));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> casa[i][j][0] >> casa[i][j][1];
        }
    }

    vector <int> puntero(2, 0);
    if (azul == puntero){
        cout << 0 << endl;
        return 0;
    }

    int contadorDeCasillas = 1;
    vector <vector <int>> punterosRecorridos;
    while ((puntero[0] != azul[0] || puntero[1] != azul[1]) && 
    (puntero[0] != -1 && puntero[1] != -1)){
        if (find(punterosRecorridos.begin(), punterosRecorridos.end(), puntero) != punterosRecorridos.end()){
            break;
        }
        
        punterosRecorridos.push_back(puntero);

        puntero = casa[puntero[0]][puntero[1]];
        contadorDeCasillas++;

        
    }

    cout << contadorDeCasillas << endl;
}