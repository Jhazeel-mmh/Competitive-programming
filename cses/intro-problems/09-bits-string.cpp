#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long m = pow(10, 9);
    m += 7;
    long long x = 1;
    for (int i = 0; i < n; i++){
        x *= 2;
        x %= m;
    }
    x = x % m;
    if (x < 0) x += m;
    cout << x << '\n';
}


/*

10^9+7.
    n= 2
    00 01 10 11
    n = 3
    000, 001, 010, 011, 100, 101, 110, 111
    n = 4
    0000 / 1000 0100 0010 0001 / 1000 0100 0010 0001 / 1100 1110 1011 / 1100 1110 1101 / 1111
*/