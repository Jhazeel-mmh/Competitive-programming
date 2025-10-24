#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("sleepy.in", "r", stdin);
	freopen("sleepy.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n; cin >> n;
    vector <int> cows(n);
    for (auto &s : cows) cin >> s;

    int answer = n-1;
    for (int i = n-1; i >= 0; i--){
        if (cows[i-1] < cows[i] && i != 0){
            answer--;
        } else {
            break;
        }
    }

    cout << answer << '\n';
}