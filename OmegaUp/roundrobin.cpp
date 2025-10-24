#include <bits/stdc++.h>

using namespace std;

int main(){
    int numeroDeProcesos = 0, capacidadDeProceso = 0;
    cin >> numeroDeProcesos >> capacidadDeProceso;

    queue <vector <int>> procesoNoTerminados;

    for (int i = 0; i < numeroDeProcesos; i++){
        int id = 0, proceso = 0;
        cin >> id >> proceso;

        if (proceso <= capacidadDeProceso){
            cout << id << endl;
        } else if (proceso > capacidadDeProceso){
            proceso -= capacidadDeProceso;
            vector <int> a = {id, proceso};
            procesoNoTerminados.push(a);
        }
    }

    while(!procesoNoTerminados.empty()){
        vector <int> primerProceso = procesoNoTerminados.front();
        procesoNoTerminados.pop();

        if (primerProceso[1] <= capacidadDeProceso){
            cout << primerProceso[0] << endl;
        } else {
            primerProceso[1] -= capacidadDeProceso;
            procesoNoTerminados.push(primerProceso);
        }
    }
}