#include <bits/stdc++.h>
using namespace std;

void solve(){
    

}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--){
       int n;
        cin >> n;
        vector <int> a(n);
        for (auto &e: a) cin >> e;

        int current = 0;
        int mult = -1;
        for (int i = 0; i < n; i++){
            int diff = abs(a[i] - current);
            // cout << diff << endl;

            

            if (current < a[i])
            current += diff * 2;
            else current -= diff*2;
        }   


        cout << ((current / 2) * (n & 1 ? 1 : -1) ) << endl;
    }
}