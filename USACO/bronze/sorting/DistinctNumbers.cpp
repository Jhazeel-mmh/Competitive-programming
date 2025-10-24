#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;
    set <int> values;
    while(n--){
        int x; cin >> x;
        values.insert(x);
    }
    cout << values.size() << endl;
}