#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        long long n;
        cin >> n;

        long long sum = 0;

        while (n){
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }
}