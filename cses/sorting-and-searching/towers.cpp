#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // vector <int> a(n);
    // for (auto &e: a) cin >> e;

      multiset<long long> a;
      for (int i = 0; i < n; i++){
          int x;
          cin >> x;

          auto it = a.upper_bound(x);

          if (it == a.end()){
            a.insert(x);
          } else {
            a.erase(it);
            a.insert(x);
          }
      }
      cout << a.size() << endl;

}