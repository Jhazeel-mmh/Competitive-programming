#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++){
        long long sz = i * i;
        long long allWays = sz * (sz - 1) / 2;
        long long badWays = 0;
        badWays += 8 * (i - 4) * (i - 4);
        badWays += 6 * (i - 4) * 4;
        badWays += 4 * (i - 3) * 4;
        badWays += 3 * 8;
        badWays += 2 * 4;
        badWays /= 2;
        cout << allWays - badWays << endl;
    }
}