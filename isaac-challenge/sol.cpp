#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    vector <int> d;
    while (n){
        d.push_back(n % 10);
        n /= 10;
    }

    int len = d.size();
    long long ans1 = 1, ans2 = 1; 

    if (len == 1){
        cout << d[0] << endl;
        return;
    } else if (d[len - 1] == 1) {
        for (int i = 0; i < len -1; i++) ans1 *= 9;
    } else {

        for (int i = 0; i < len; i++){
            if (d[i] == 0){
                d[i + 1]--;
                ans2 *= 9;
            } else {
                ans2 *= d[i];
            }
        }
    }

    cout << (max(ans1, ans2)) << endl;
}