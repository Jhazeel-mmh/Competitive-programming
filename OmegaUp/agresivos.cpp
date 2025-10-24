#include <bits/stdc++.h>
using namespace std;

int n, p;
vector <int> cubiculos;

bool esPosible(int d){
    int programadores = 1;
    int ultimaPosicion = cubiculos[0];
    for (int j = 1; j < n; j++){
        if (cubiculos[j] - ultimaPosicion >= d){
            ultimaPosicion = cubiculos[j];
            programadores++;
        }
    }
    if (programadores >= p) return true;
    return false;
}

int busquedaBinaria(int rango){
    int r = 0;
    int inicio = 0, final = rango;
    while (inicio <= final){
        int mid = inicio + (final - inicio) / 2;
        if (esPosible(mid)){
            r = mid;
            inicio = mid + 1;
        } else {
            final = mid - 1;
        }
    }

    return r;
}

int main(){
    cin >> n >> p;

    for (int i = 0; i < n; i++){
        int n;
        cin >> n;
        cubiculos.push_back(n);
    }

    sort(cubiculos.begin(), cubiculos.end());

    int distancia = cubiculos[n - 1] - cubiculos[0];
    int respuesta = busquedaBinaria(distancia);
    cout << respuesta << '\n';
}