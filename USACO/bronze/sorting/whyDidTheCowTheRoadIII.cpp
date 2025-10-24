#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin >> n;

    vector <pair <int,int>> cows(n);
    for (auto &[a, b] : cows) cin >> a >> b;

    sort(cows.begin(), cows.end());
    int t = cows[0].first + cows[0].second;
    for (int i = 1; i < n; i++){
        if (t > cows[i].first){
            t += cows[i].second;
        } else {
            t = cows[i].first;
            t+= cows[i].second;
        }

    }

    cout << t << '\n';
}