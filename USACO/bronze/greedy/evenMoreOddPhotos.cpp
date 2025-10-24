#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;

    vector <int> par;
    vector <int> impar;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x % 2 == 0) par.push_back(x);
        else impar.push_back(x);
    }


    int pares = par.size(),
    impares = impar.size();
    if (pares == impares){
        cout << par.size() + impar.size() << '\n';
        return 0;
    }

    int iteracion = 0, cnt = 0, 
    apuntadorPar = 0, apuntadorImpar = 0;
    while (apuntadorPar < pares || apuntadorImpar < impares){

        if (iteracion % 2 == 0){ // va un par
            if (apuntadorPar < pares){
                cnt++; 
                apuntadorPar++;
            } else if ((impares - apuntadorImpar) >= 2) {
                apuntadorImpar+=2;
                cnt++;
            } else {
                break;
            }


        } else {
            if (apuntadorPar == pares){
                if ((impares - (apuntadorImpar + 1)) % 3 == 1){
                    int cimpar = impar[apuntadorImpar] + impar[apuntadorImpar + 1] +
                    impar[apuntadorImpar + 2];
                    if (cimpar % 2 == 1) {
                        cnt++; 
                        apuntadorImpar+=3;
                        iteracion++; 
                        continue;
                    }
                }
            }
            if (apuntadorImpar < impares){
                cnt++; apuntadorImpar++;
            } else {
                break;
            }
        }

        iteracion++;
    }

    cout << cnt << '\n';

}