#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r;
    cin >> n >> r;

    vector <int> autobus(n);
    int felices = 0, personasSolas = 0;
    for (int i = 0; i < n; i++){
        cin >> autobus[i];
        felices += (autobus[i]/2)*2;
        r -= autobus[i]/2;
        personasSolas += autobus[i]%2;
    }
    if (personasSolas > r){
        while (personasSolas > r){
            personasSolas -= 2;
        }
        felices += personasSolas;
    } else {
        felices += personasSolas;
    }

    cout << felices << '\n';
}