#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> hombres(n);
    vector <int> mujeres(n);

    for (int i = 0; i < n; i++){
        cin >> hombres[i];
    }

    for (int i = 0; i < n; i++){
        cin >> mujeres[i];
    }

    int minDiff = 0, maxDiff = 0;
    sort(hombres.begin(), hombres.end());   
    sort(mujeres.begin(), mujeres.end());
    
    for (int i = 0; i < n; i++){
        minDiff += abs(hombres[i] - mujeres[i]);
    }

    
    sort(hombres.rbegin(), hombres.rend());
    for (int i = 0; i < n; i++){
        maxDiff += abs(hombres[i] - mujeres[i]);
    }

    cout << minDiff << " " << maxDiff << endl;
    
}