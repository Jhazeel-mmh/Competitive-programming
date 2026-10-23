#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
        int n, k;
        cin >> n >> k;

        vector <tuple<int, int, int>> casinos(n);
        for (auto &e : casinos) cin >> get<0>(e) >> get<1>(e) >> get<2>(e);

        sort(casinos.begin(), casinos.end(), [&](auto a, auto b){
            return get<0>(a) < get<0>(b);
        });


        for (auto e : casinos){
            if (get<0>(e) <= k && k <= get<1>(e)){
                if (get<2>(e) > k){
                    k = get<2>(e);
                }
            }
        }

        cout << k << endl;

    }    
}