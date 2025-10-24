#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int T, N;
    cin >> T >> N;
    vector <char> palabra(T);
    for (auto &c : palabra) cin >> c;

    
    vector <vector <int>> letras(30);
    for (int i = 0; i < T; i++){
        letras[palabra[i] - 'a'].push_back(i);
    }

    for (int i = 0; i < N; i++){
        int x; string xi;
        cin >> x >> xi;
        int pos = 0;
        bool res = true;
        for (char c : xi){
            auto it = lower_bound(letras[c - 'a'].begin(), letras[c - 'a'].end(), pos);
            if (it != letras[c - 'a'].end()){
                pos = *it + 1;
            } else {
                res = false;
                break;
            }
        }

        if (res) cout << 1 << endl;
        else cout << 0 << endl;
    }
}