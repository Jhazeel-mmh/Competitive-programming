#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <pair <int,int>> a(n);
    for (auto &e: a) cin >> e.first >> e.second;

    sort(a.begin(), a.end(), [&](auto a, auto b){
        return a.second < b.second;
    });

    int ans = 1;

    int last_time = a[0].second;
    for(int i = 1; i < n; i++){
        if (a[i].first >= last_time){
            ans++;
            last_time = a[i].second;
        }
    }

    cout << ans << endl;
}