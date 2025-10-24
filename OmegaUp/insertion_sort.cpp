#include "InsertionSortInteractivo.h"
#include <bits/stdc++.h>

// Main
//	int guardar(int indice)
//	int obtener(int indice)
//	bool desplazar(int indice)
//	void insertar(int indice)

void ordenar(int n) {
	// FIXME
    for(int i = 1; i < n; i++){
        int tmp = guardar(i);
        int j = i - 1;
        while (j >= 0 && obtener(j) > tmp){
            desplazar(j);
            j--;
        }
        insertar(j + 1);
    }

}