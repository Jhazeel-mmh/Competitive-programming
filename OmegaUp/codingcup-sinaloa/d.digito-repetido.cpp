#include <bits/stdc++.h>
using namespace std;
int main(){
    long long mod = 1'000'000'007;
    long long n,
    m = 0;
    int k;
    cin >> n >> k;
    long long a = ((pow(10, n) - 1) / 9);
    m = (k * (a % mod)) % mod; 

    cout << m << endl;

} 