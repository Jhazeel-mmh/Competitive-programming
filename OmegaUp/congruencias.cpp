#include <bits/stdc++.h>

using namespace std;

int main(){
    int b, c, n;
    cin >> b >> c >> n;

    int modC = b % c, contador = 0;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if (tmp % c == modC) contador++;
    }
    cout << contador << "\n";
}