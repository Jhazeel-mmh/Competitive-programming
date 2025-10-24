#include <bits/stdc++.h>
using namespace std;

string caso(string &palabra, int &puntero){
    vector <char> pal;
    for (; puntero < palabra.length(); puntero++){
        char caracter = palabra[puntero];
        int codigoChar = palabra[puntero];

        if (caracter == ']'){
            break;
        }

        if (caracter == '['){
            continue;
        }

        if (codigoChar >= 97 && codigoChar <= 122){
            pal.push_back(caracter);
        }

        if (isdigit(caracter)){
            int k = 0;
            while (puntero < palabra.size() && isdigit(palabra[puntero])){
                k = k * 10 + (palabra[puntero] - '0');
                puntero++;
            }
            string a = caso(palabra, puntero);
            while(k--){
                for (char c : a){
                  pal.push_back(c);
                }
            }
        }
    }

    string p = "";
    for (int i = 0; i < pal.size(); i++){
        p+= pal[i];
    }
    return p;
}

int main() {
    string palabra;
    cin >> palabra;
    int puntero = 0;

    cout << caso(palabra, puntero) << endl;
}