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
        vector <int> d;
        while (n){
            d.push_back(n % 10);
            n/=10;
        }

        long long sum = 0, sum2 = 0;
        for (int i = 0; i < d.size(); i++) sum += d[i];
        sum2 = sum;

        if (sum <= 9){
            cout << 0 << endl;
            continue;
        }


        reverse(d.begin(), d.end());

        vector <int> canEliminate(d.begin() + 1, d.end());

        sort(canEliminate.rbegin(), canEliminate.rend());

        int cnt = 0, cnt2 = 0;


        if (d[0] > 1) {
            cnt++;
            sum -= (d[0] - 1);
        }

        for (int i = 0; i < canEliminate.size(); i++){
            if (sum > 9){
                cnt++;
                sum -= canEliminate[i];
            }

            if (sum2 > 9){
                cnt2++;
                sum2 -= canEliminate[i];
            }
        }


        cout << min(cnt, cnt2) << endl;


    }
}