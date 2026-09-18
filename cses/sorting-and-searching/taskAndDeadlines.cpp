#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair <int,int>> a(n);
    for (auto &e: a) cin >> e.first >> e.second;

    sort(a.begin(), a.end(), [&](auto a, auto b){
        return a.first < b.first;
    });

    long long ans = 0;
    long long time = 0;
    for (int i = 0; i < n; i++){
        time += a[i].first;
        ans += a[i].second - time;
    }   

    cout << ans << endl;
}   