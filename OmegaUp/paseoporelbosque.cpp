#include <bits/stdc++.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;
};

Nodo* construirArbol(){
   
}

void preOrder(Nodo* raiz){
    if (raiz == nullptr) return;
    cout << raiz->dato << " ";
    preOrder(raiz->izquierda);
    preOrder(raiz->derecha);
}

void inOrder(Nodo* raiz){
    if (raiz == nullptr) return;
    inOrder(raiz->izquierda);
    cout << raiz->dato << " ";
    inOrder(raiz->derecha);
}

void postOrder(Nodo* raiz){
    if (raiz == nullptr) return;
    postOrder(raiz->izquierda);
    postOrder(raiz->derecha);
    cout << raiz->dato << " ";
}

void liberarmemoria(Nodo* raiz){
    if (raiz == nullptr) return;
    liberarmemoria(raiz->izquierda);
    liberarmemoria(raiz->derecha);
    delete raiz;
} 

int main(){
    int size = 0;
    cin >> size;
    vector <int> arreglo(size);
    for (int i = 0; i < size; i++){
        cin >> arreglo[i];
    }

    Nodo* raiz = construirArbol(arreglo, 0, arreglo.size() - 1);
    preOrder(raiz);
    cout << endl;
    inOrder(raiz);
    cout << endl;
    postOrder(raiz);
    cout << endl;
    liberarmemoria(raiz);
}

