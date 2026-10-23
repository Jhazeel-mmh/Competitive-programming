#include <bits/stdc++.h>
using namespace std;


int last_true(int lo, int hi, function<bool(int)> f){
    lo--;
    while(lo < hi){
        
        int mid = lo + (hi - lo + 1) / 2;

        if (f(mid)){
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    return lo;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);    
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (auto &e : a) cin >> e;

    sort(a.begin(), a.end());

    int idx = last_true(1,2e9 , [&](int x){
        long long ops_needed = 0;

        for (int i = (n - 1)/ 2; i < n; i++){
            ops_needed += max(0, x - a[i]);

            if (ops_needed > k) return false; 
        }

        return k >= ops_needed;
    });

    cout << idx << endl;
}