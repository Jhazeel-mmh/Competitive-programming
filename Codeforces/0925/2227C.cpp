#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector <int> a(n), ans;
        vector <vector<int>> b(6);
        for (auto &e: a) {
            cin >> e;
            b[e % 6].push_back(e);
        }
        
        for (int x: b[0]) ans.push_back(x);
        for (int x: b[2]) ans.push_back(x);
        for (int x: b[4]) ans.push_back(x);
        for (int x: b[1]) ans.push_back(x);
        for (int x: b[5]) ans.push_back(x);
        for (int x: b[3]) ans.push_back(x);

        for (int x : ans) cout << x << " ";
        cout << endl;
    }


}