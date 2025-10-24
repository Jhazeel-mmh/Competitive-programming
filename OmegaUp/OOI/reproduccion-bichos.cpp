#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, dias;
    cin >> n >> dias;

    int Ba = n;
    int Bb = 0;
    int Bc = 0;

    for (int i = 0; i < dias; i++){
        int tmpBa, tmpBb, tmpBc;
        tmpBa = Ba * 2 + Bc;
        tmpBb = Bb + (3 * Ba) + (Bb * 2);
        tmpBc = Bc + (Ba) + (2 * Bb) + (4 * Bb);
        Ba = tmpBa;
        Bb = tmpBb;
        Bc = tmpBc;
    }
    cout << Ba + Bc + Bb << endl;

}