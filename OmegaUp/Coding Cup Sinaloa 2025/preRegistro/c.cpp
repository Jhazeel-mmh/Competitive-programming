#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pares = 0, impares = 0;
    for (int i = 0; i < n; i++){
        int ni;
        cin >> ni;
        if (ni % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    cout << pares << " " << impares << endl;
}