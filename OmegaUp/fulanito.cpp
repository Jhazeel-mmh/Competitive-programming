#include <bits/stdc++.h> 
using namespace std;

int main(){
    int q, n;
    cin >> q >> n;
    int carros[n];
    vector <int> prefixSum(n, 0);
    for (int i = 0; i < n; i++){
        cin >> carros[i];
    }

    prefixSum[0] = carros[0];
    for (int i = 1; i < n; i++){
        prefixSum[i] += carros[i] + prefixSum[i - 1];
    }


    for (int i = 0; i < q; i++){
        long long g;
        cin >> g;

        auto it = upper_bound(prefixSum.begin(), prefixSum.end(), g);
        int indiceOAutosLlenados = distance(prefixSum.begin(), it);


        long long gasolinaSobrante;
        if (indiceOAutosLlenados == 0){
            gasolinaSobrante = g;
        } else {
            gasolinaSobrante = g - prefixSum[indiceOAutosLlenados - 1];
        }
        cout << indiceOAutosLlenados << " " << gasolinaSobrante << endl;
    }
}