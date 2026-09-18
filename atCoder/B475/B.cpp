#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e : a) cin >> e;

   
         int cen = 0, dec = 0, uni = 0;
    for (auto e: a){
        int amoutThousand = ceil((double) e / 1000.00) * 1000;
        int change = amoutThousand - e;
        
        uni += (change % 10);
        change /= 10;
        dec += (change % 10);
        change /= 10;
        cen += change;
        
    }
    printf("%d %d %d\n", uni, dec, cen);
}