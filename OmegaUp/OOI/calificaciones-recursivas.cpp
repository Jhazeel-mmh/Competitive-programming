#include <bits/stdc++.h>
using namespace std;

int calificacionesRecursivas(string &cadena, int &indice){
    int tamanoDeLaCadena = cadena.size();
    int suma = 0, cc = 0;
    for (; indice < tamanoDeLaCadena; indice++){
        char c = cadena[indice];
        if (c == ')') {
            break;
        }
        if (c == '('){
            indice++;
            suma += calificacionesRecursivas(cadena, indice);
            cc++;
        }

        if (isdigit(c)){
            suma += (int) c - '0';
            cc++;
        }
    }
    return suma / cc;
}

int main(){
    string cadena;
    cin >> cadena;
    int tamanoDeLaCadena = cadena.size();
    int suma = 0, cc = 0, indice = 1;
    for (; indice < tamanoDeLaCadena; indice++){
        char c = cadena[indice];
        if (c == ')') break;
        if (c == '('){
            indice++;
            suma += calificacionesRecursivas(cadena, indice);
            cc++;
        }

        if (isdigit(c)){
            int numero = (int) c - '0';
            suma += numero;
            cc++;
        }
    }
    int resultado = suma / cc;
    cout << resultado << '\n';
}