#include <bits/stdc++.h>
#include "PilaInteractivo.h"

using namespace std;
vector <int> pila = {};

void agrega(int n){
    if (pila.size() > 10000) return;
    if (n < 0 || n > 100000) return;

    pila.push_back(n);

}

int saca(){
    if (pila.size() == 0) return -1;
    int numero = pila[pila.size() - 1];
    pila.pop_back();
    return numero;
}