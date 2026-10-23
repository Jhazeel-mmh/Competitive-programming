#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector <long long> a(n);
    for (auto &e: a) cin >> e;
 
    
    long long ans = 0;
    long long l = 0, r = 0;
    set <long long> curr;
    while (l < n && r < n){
        if (curr.count(a[r])){
            while (curr.count(a[r])){
                curr.erase(a[l++]);
            }
            curr.insert(a[r]);
            ans += curr.size();
        } else {
            curr.insert(a[r]);
            ans += curr.size();
        }
        r++;
    }
 
    cout << ans << endl;
}
