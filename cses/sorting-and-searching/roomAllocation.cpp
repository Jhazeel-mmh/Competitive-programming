#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <vector <int>> a(n, vector <int> (3));
    for (int i = 0; i < n; i++){
        cin >> a[i][1] >> a[i][0];
        a[i][2] = i;
    }


    sort(a.begin(), a.end());
    vector <int> ans(n);
    set <vector <int>> rooms;


    for (int i = 0; i < n; i++){
        auto it = rooms.lower_bound({a[i][1]});
        if (it != rooms.begin()){
            it--;
            ans[a[i][2]] = (*it)[1];
            rooms.erase(it);
        } else 
            ans[a[i][2]] = rooms.size();
        rooms.insert({a[i][0], ans[a[i][2]]});
    }
    cout << rooms.size() << endl;
    for (auto e : ans) cout << e+1 << " ";
    cout << endl;

}


/*
X: 1 1 5  1
X: 2 3 3  1
X: 2 3 8  2
X: 3 3 1  3
X: 3 4 0  4
X: 6 7 6  1
X: 8 8 9  1
X: 9 9 7  1
X: 9 10 2 2
X: 10 10 4 1

*/