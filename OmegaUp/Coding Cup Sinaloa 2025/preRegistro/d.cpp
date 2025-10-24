#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    for (int i = 0; i < n; i++){
        int a, b, total = 0;
        cin >> a >> b;

        for (int j = a; j <= b; j++){
            int tmp = j, suma = 0;
            while (tmp > 0){
                suma += tmp % 10;
                tmp /= 10;
            }   
            total += suma;
        }
        cout << total << endl;
    }
}