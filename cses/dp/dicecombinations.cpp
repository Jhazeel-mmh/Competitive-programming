#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;

int main(){
    int n;
    cin >> n;
    vector <int> count(n+1);
    count[0] = 1;
    for (int x = 1; x <= n; x++){
        for (int c = 1; c <= 6; c++){
            if (x - c >= 0){
                count[x] += count[x-c];
                count[x] %= MOD;
            }
        }
    }
    cout << count[n] << endl;
}