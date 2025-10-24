#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    int numeros[k];
    int maximo_numero_primos = 0;
    for (int i = 0; i < k; i++){
        cin >> numeros[i];
        maximo_numero_primos = max(numeros[i], maximo_numero_primos);
    }

    int numerosPrimos[maximo_numero_primos];
    bool esprimo[maximo_numero_primos];
    bool visitado[maximo_numero_primos];

    for (int i = 1; i <= maximo_numero_primos; i++){
        numerosPrimos[i - 1] = i;
        esprimo[i - 1] = false;
        visitado[i - 1] = false;
    }

    esprimo[0] = esprimo[1] = visitado[0] = visitado[1] = true; 
    int valor = 2;
    for (int indice = 1; indice < maximo_numero_primos; indice++){
        if (esprimo[indice] == true){
            valor = numerosPrimos[indice];
        }

        for (int j = indice + 1; j < maximo_numero_primos; j++){
            if (numerosPrimos[j] % valor != 0 && !visitado[j]){
                esprimo[j] = true;
                visitado[j] = true;
            } 
        }
    }

    for (int i = 0; i < k; i++){
        int n = numeros[i];
        if (esprimo[n - 1]){
            cout << "SI" << '\n';
        }
    }

    
}