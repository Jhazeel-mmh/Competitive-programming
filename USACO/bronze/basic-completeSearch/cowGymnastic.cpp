#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
    cin.tie(0);
    ios::sync_with_stdio(0);

    int k, n; cin >> k >> n;
    vector <vector <int>> m(k, vector <int> (n));
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++) cin >> m[i][j];
    }


    set <pair <int, int>> paresConsistentes;

    for (int i = 0; i < k; i++){
        set <pair <int, int>> paresK;

        for (int j = 0; j < n-1; j++){
            for (int h = j+1; h < n; h++){
               paresK.insert(make_pair(m[i][j], m[i][h]));
            }
        }


        if (i == 0){
            for (auto p : paresK) paresConsistentes.insert(p);
        } else {
            set <pair <int, int>> paresAEliminar;
            for (auto p : paresConsistentes){
                if (!paresK.count(p)){
                    paresAEliminar.insert(p);
                }
            }

            for (auto p : paresAEliminar){
                paresConsistentes.erase(p);
            }
        }

    }

    cout << paresConsistentes.size() << '\n';
}