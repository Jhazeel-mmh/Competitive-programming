#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> palabras(n, "vacio");
    vector <int> cantidad(n, 0);

    int maxP = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        for (int j = 0; j < n; j++){
            if (s == palabras[j]){
                cantidad[j]++;
                maxP = max(maxP, cantidad[j]);
                break;
            } else if (palabras[j] == "vacio"){
                palabras[j] = s;
                cantidad[j]++;
                maxP = max(maxP, cantidad[j]);
                break;
            } 
        }


    }

    cout << maxP << endl;
}   