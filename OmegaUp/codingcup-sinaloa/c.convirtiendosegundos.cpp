#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    long long c = 0;
    while (true){
        if (n >= 60 && c < 2){
            n /= 60;
            c++;
        } else if (c == 2 && n >= 24){
            n /= 24;
            c++;
        } else {
            break;
        }
    }

    switch (c)
    {
    case 0:
        if (n == 1) {
            cout << 1 << " segundo" << endl;
            break;
        }
        cout << n << " segundos" << endl;
        break;
    case 1:
        if (n == 1) {
            cout << 1 << " minuto" << endl;
            break;
        }
        cout << n << " minutos" << endl;
        break; 
    case 2:
        if (n == 1) {
            cout << 1 << " hora" << endl;
            break;
        }
        cout << n << " horas" << endl;
        break;
    case 3:
        if (n == 1) {
            cout << 1 << " dia" << endl;
            break;
        }
        cout << n << " dias" << endl;
        break;
    default:
        break;
    }
}