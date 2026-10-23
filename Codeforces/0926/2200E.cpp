#include <bits/stdc++.h> 
using namespace std;


int primebase(int x){
    set <int> s;
    for (int i = 2; i * i <= x; i++){
        while (x % i == 0){
            x /= i;
            s.insert(i);
        }
    }

    if (x > 1) s.insert(x);
    if (s.size() > 1) return -1;
    if (s.size() == 0) return 1;
    return *s.begin();
}

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int &e : a)cin >> e;

    vector <int> b(n);
    for (int i = 0; i < n; i++) b[i] = primebase(a[i]);

    if (is_sorted(a.begin(), a.end())) return void(cout << "Bob" << endl);
    if (*min_element(b.begin(), b.end()) == -1) return void(cout << "Alice" << endl);
    if (is_sorted(b.begin(), b.end())) return void(cout << "Bob" << endl);
    else cout << "Alice" << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}