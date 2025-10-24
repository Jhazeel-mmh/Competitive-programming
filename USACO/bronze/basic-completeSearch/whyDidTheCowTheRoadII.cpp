#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s; cin >> s;
    int slen = s.size();

    vector <int> start(26, -1);
    vector <int> ending(26, -1);

    for (int i = 0; i < s.size(); i++){
        char c = s[i];
        if (start[c - 'A'] == -1){
            start[c - 'A'] = i;
        } else {
            ending[c - 'A'] = i;
        }

    }

    int cnt = 0;
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 26; j++){
            if (start[i] < start[j] && start[j] < ending[i]  && ending[i] < ending[j]){
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
}    