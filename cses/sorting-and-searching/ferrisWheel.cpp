#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, x;
    cin >> n >> x;
    vector <long long> a(n);
    for (auto &e: a) cin >> e;

    sort(a.begin(), a.end());

    long long l = 0, r = n-1;

    long long ans = 0;
    while (l <= r){

        if (l == r){
            ans++;
            break;
        }

        if (a[l] + a[r] <= x){
            ans++;
            l++;
            r--;
        } else {
            ans++;
            r--;
        }

    }
    cout << ans << endl;


}