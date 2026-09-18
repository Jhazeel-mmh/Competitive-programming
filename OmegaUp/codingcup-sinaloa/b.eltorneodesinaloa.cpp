#include <bits/stdc++.h>
using namespace std;

struct Retadores{
    int requiere;
    vector <int> tipos;
    int entrega;
    vector <int> entregaTipos;
};

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    int Spoderes;
    cin >> Spoderes;
    vector <int> tiposDePoderes(Spoderes);
    for (int i = 0; i < Spoderes; i++){
        cin >> tiposDePoderes[i];
    }

    vector <Retadores> retadores(N + 1);

    for (int i = 2; i <= N; i++){
        cin >> retadores[i].requiere;
        for (int tps = 0; tps < retadores[i].requiere; tps++){
            int tipo;
            cin >> tipo;
            retadores[i].tipos.push_back(tipo);
        }
        cin >> retadores[i].entrega;
        for (int ent = 0; ent < retadores[i].entrega; ent++){
            int entregaT;
            cin >> entregaT;
            retadores[i].entregaTipos.push_back(entregaT);
        }
    }

    vector <vector <int>> grafo(M + 1, vector <int> (3));

    for (int i = 0; i < M+1; i++){
        for (int j = 0; j < 3; j++){
            cin >> grafo[i][j];
        }
    }

    int Jefe;
    cin >> Jefe;
}