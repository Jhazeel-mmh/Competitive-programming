#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector <int> a(n);

        vector <int> answ(3, 0);

        for (auto &e: a) {
            cin >> e;

            if (e % 2 == 1) answ[1]++;
            else answ[e % 4]++;
        }

        cout << (max({answ[0], answ[1], answ[2]})  ) << endl;


    }

}