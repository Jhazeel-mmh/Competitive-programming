#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &e: a) cin >> e;

    set <int> curr;
    long long ans = 0;

    int l = 0, r = 0;

    while (l < n && r < n){
        if (curr.count(a[r])){
            while (curr.count(a[r])){
                curr.erase(a[l++]);
            }
            curr.insert(a[r]);
        } else {
            curr.insert(a[r]);
        }
        ans = max(ans, (long long)curr.size());
        r++;
    }



    cout << ans << endl;

}