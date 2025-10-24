#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int contador = 0;
    for (int i = 5; i <= n; i *= 5){
        contador += n / i;
    }
    cout << contador << '\n';
}


// Para contar los ceros al final de n!, contamos cuántos factores de 5 hay en el producto.
// Cada múltiplo de 5 aporta al menos un factor 5, múltiplos de 25 aportan uno extra, múltiplos de 125 otro más, y así sucesivamente.
// Sumamos n/5 + n/25 + n/125 + ... para contar todos los factores de 5, que determinan la cantidad de ceros al final.
// recuerda que un factor es un numero que puede dividir a otro sin dejar residuos y numeros multiplos de 5 (es decir, 5, 25, 125, etc)
// el 20 solo tiene 5 que lo pueda dividir y 15, 10 y 5 tambien pero el 25 tiene 5 y 25 entonces se suman 2 factores en un solo multiplo