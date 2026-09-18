#include <bits/stdc++.h>
using namespace std;

int casoSuma(vector <vector <int>> &m){
    vector <int> coordenadasEnteras;
    string coordenadas;
    getline(cin, coordenadas);
    int x = 0;
    for (char c: coordenadas){
        if (isdigit(c)){
            x = x * 10 + (c - '0');
        } else {
            coordenadasEnteras.push_back(x);
            x = 0;
        }
    }
    coordenadasEnteras.push_back(x);
    cout << "pass" << endl;
    int suma = 0;
    for (int i = coordenadasEnteras[0] - 1; i <= coordenadasEnteras[2] - 1; i++){
        cout << "pass 1 for" << endl;
        for (int j = coordenadasEnteras[1] - 1; j <= coordenadasEnteras[3] - 1; j++){
            suma += m[i][j];
        }
    }

    return suma;
}

int main(){
    int rows, cols;
    cin >> rows >> cols;
    vector <vector <int>> mapa(rows, vector <int> (cols));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> mapa[i][j];
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin.ignore();
        int totalA = casoSuma(mapa);
        int totalB = casoSuma(mapa);

        if (totalA > totalB) cout << 1 << endl;
        else if (totalB > totalA) cout << 2 << endl;
        else {
            cout << 0 << endl;
        }
    }
}
