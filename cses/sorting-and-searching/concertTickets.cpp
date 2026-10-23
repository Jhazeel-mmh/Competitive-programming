#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    
    multiset<int> a;
    vector <int> b(m);

    for (long long i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }

    for (auto &e: b) {
        cin >> e;
        auto it = a.lower_bound(e);

        if (*it > e && it == a.begin() || !a.size()) cout << -1 << endl;
        else {
            if (*it > e || it == a.end()) it--;
            cout << *it << endl;
            a.erase(it);
        }
    }
}