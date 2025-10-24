#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;

    if (n < 1 || n > 10000) return 0;

    queue <int> cola;
    int contadorDeTacosVendidos = 0;

    for (int i = 0; i < n; i++){
        int accion = 0;
        cin >> accion;
        
        if (accion < 1 || accion > 4) continue;
        switch (accion){
            case 1: {
                int tacos = 0;
                cin >> tacos;
                if (tacos < 1 || tacos > 1000) continue;
                cola.push(tacos);
                break;
            }
            case 2: {
                if (!cola.empty()){
                    contadorDeTacosVendidos += cola.front();
                    cola.pop();
                } 
                break;
            } 
            case 3: {
                cout << cola.size() << endl;
                break;
            }
            case 4: {   
                cout << contadorDeTacosVendidos << endl;
                break;
            }
        }
    }

}